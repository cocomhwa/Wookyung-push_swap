/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:57:34 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 18:40:01 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	a_to_b(t_stack *a, t_stack *b, int chunk)
{
	int num;

	num = 0;
	while (is_exist_stack(a))
	{
		if (a->top->num < num)
		{
			p(a, b);
			num++;
		}
		else if (a->top->num > num && a->top->num < num + chunk)
		{
			p(a, b);
			r(b);
			num++;
		}
		else
		{
			r(a);
		}
	}
}

static void	b_to_a(t_stack *b, t_stack *a)
{
	int	size;
	int max;

	size = a->size;
	max = size;
	while (is_exist_stack(b))
	{
		if (max_in_first_half(b, size))
		{
			while (b->top->num != size - 1)
				r(b);
		}
		else
		{
			while (b->top->num != size - 1)
				rr_(b);
		}
		p(b, a);
		size--;
	}
}

void	auto_sort(t_stack *a, t_stack *b)
{
	int	num;
	int	chunk;

	num = 0;
	chunk = get_chunk((double)(a->size));
	a_to_b(a, b, chunk);
	b_to_a(b, a);
}
