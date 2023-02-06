/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:15:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/06 21:32:34 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_nullguard(void *content)
{
	if (!content)
		exit(1);
	return (content);
}

t_stack	new_stack(void)
{
//	t_node	*newnode;
	t_stack	stack;

//	newnode = ft_nullguard(malloc(sizeof(t_node)));
//	newnode->num = num;
//	newnode->up = newnode;
//	newnode->down = newnode;
	stack.top = NULL;
	return (stack);
}

void	append(int num, t_stack *stack)
{
	t_node	*newnode;

	newnode = ft_nullguard(malloc(sizeof(t_node)));
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
		append(int_array[i], &stack);
	return (stack);
}
