/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:18:07 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 15:23:14 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_stack *stack)
{
	if (stack->top)
	{
		rotate(stack);
		ft_printf("r%c\n", stack->name);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	if (a->top && b->top)
	{
		rotate(a);
		rotate(b);
		ft_printf("rr\n");
	}
}

void	rr_(t_stack *stack)
{
	if (stack->top)
	{
		reverse_rotate(stack);
		ft_printf("rr%c\n", stack->name);
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a->top && b->top)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		ft_printf("rr\n");
	}
}
