/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:57:34 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/25 07:11:49 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	a_to_b(t_stack *a, t_stack *b, int chunk, int which_rotate)
{
	int	num;

	num = 0;
	while (is_exist_stack(a))
	{
		if (a->top->num < num)
		{
			p(a, b);
			num++;
		}
		else if (a->top->num >= num && a->top->num < num + chunk)
		{
			p(a, b);
			r(b);
			num++;
		}
		else
		{
			if (which_rotate == 1)
				rr_(a);
			else
				r(a);
		}
	}
}

static void	b_to_a(t_stack *b, t_stack *a)
{
	int	size;

	size = a->size;
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
	int	chunk;
	int	which_rotate;

	chunk = get_chunk((double)(a->size));
	which_rotate = rra_is_better(a);
	a_to_b(a, b, chunk, which_rotate);
	b_to_a(b, a);
}
