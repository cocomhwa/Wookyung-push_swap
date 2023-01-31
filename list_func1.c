/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:15:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/31 22:05:32 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack new_linked_list(int content)
{
	t_node	*newnode;
	t_stack	stack;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		exit(1);
	newnode->content = content;
	newnode->next = newnode;
	newnode->previous = newnode;
	stack.head = newnode;
	stack.tail = newnode;
	return (stack);
}

void	lstadd_back(int num, t_stack *stack)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	newnode->content = num;
	stack->head->next = newnode;
	newnode->next = stack->head;
	newnode->previous = stack->tail;
	stack->head = newnode;
	stack->tail->previous = newnode;
}

t_stack make_stack(int *int_array, int size)
{
	int		i;
	t_stack	stack;

	i = 0;
	stack = new_linked_list(int_array[i++]);
	while (i < size)
		lstadd_back(int_array[i++], &stack);
	return (stack);
}
