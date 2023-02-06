/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:15:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 02:10:29 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*nullguard(void *content)
{
	if (!content)
		exit(1);
	return (content);
}

t_stack	new_stack(void)
{
	t_stack	stack;

	stack.top = NULL;
	return (stack);
}

void	add_top(int num, t_stack *stack)
{
	t_node	*newnode;

	newnode = nullguard(malloc(sizeof(t_node)));
	if (stack->top == NULL)
	{
		stack->top = newnode;
		stack->bottom = newnode;
	}
	newnode->num = num;
	stack->top->up = newnode;
	newnode->up = stack->bottom;
	newnode->down = stack->top;
	stack->top = newnode;
	stack->bottom->down = newnode;
}

t_stack	make_stack(int *int_array, int size)
{
	int		i;
	t_stack	stack;

	i = size;
	stack = new_stack();
	while (--i >= 0)
		add_top(int_array[i], &stack);
	return (stack);
}
