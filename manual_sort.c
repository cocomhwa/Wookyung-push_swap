/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <woosin@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:37:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/27 13:50:53 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	partial_sorted(t_stack *stack)
{
	if ((stack->top->num == 1) && (stack->bottom->num == 3)
		&& (stack->top->down->num == 2))
		return (1);
	return (0);
}

static void	sort_three_num(t_stack *a, int min, int mid)
{
	if (a->top->num == min)
	{
		s(a);
		r(a);
	}
	else if (a->top->num == mid)
	{
		if (a->top->down->num == min)
			s(a);
		else
			rr_(a);
	}
	else
	{
		if (a->top->down->num == min)
			r(a);
		else
		{
			s(a);
			rr_(a);
		}
	}
}

static void	sort_five_num(t_stack *a, t_stack *b)
{
	int	i;

	i = a->size;
	while (i > 0)
	{
		if (a->top->num == 0 || a->top->num == 4)
			p(a, b);
		else
			r(a);
		i--;
	}
	if (!partial_sorted(a))
		sort_three_num(a, 1, 2);
	if (b->top->num == 4)
	{
		p(b, a);
		r(a);
		p(b, a);
	}
	else if (b->top->num == 0)
	{
		p(b, a);
		p(b, a);
		r(a);
	}
}

void	manual_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = a->size;
	if (size == 2)
		r(a);
	else if (size == 3)
		sort_three_num(a, 0, 1);
	else if (size == 5)
		sort_five_num(a, b);
	else
		auto_sort(a, b);
}
