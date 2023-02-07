/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:20:12 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 15:15:34 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(t_stack *stack)
{
	if (stack->top)
	{
		swap(stack);
		ft_printf("s%c\n", stack->name);
	}
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->top && b->top)
	{
		swap(a);
		swap(b);
		ft_printf("ss\n");
	}
}
