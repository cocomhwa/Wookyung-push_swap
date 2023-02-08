/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:56:41 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/08 18:25:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	stack->bottom = stack->bottom->down;
	stack->top = stack->top->down;
}

void	reverse_rotate(t_stack *stack)
{
	stack->bottom = stack->bottom->up;
	stack->top = stack->top->up;
}

void	swap(t_stack *stack)
{
	int	top_num;

	top_num = stack->top->num;
	stack->top->num = stack->top->down->num;
	stack->top->down->num = top_num;
}

void	push(t_stack *src, t_stack *dest)
{
	t_node	*src_top;

	add_top(src->top->num, dest);

	src_top = src->top;
	if (src->top == src->bottom)
		src->top = NULL;
	else
	{
		src->top = src->top->down;
		src->top->up = src->bottom;
		src->bottom->down = src->top;
	}
	free(src_top);
}
