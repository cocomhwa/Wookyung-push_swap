/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:31:40 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 21:01:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_stack *stack)
{
	t_node *node;
	t_node *min;

	node = stack->top;
	min = stack->top;
	while (1)
	{
		if (min->num > node->down->num)
			min = node->down;
		node = node->down;
		if (node == stack->top)
			break;
	}
	return (min);
}

void	reverse_sort(t_stack *a, t_stack *b)
{
	t_node *min;

	while (a)
	{
		min = find_min(a);
		while (a->top != min)
			r(a);
		p(a, b);
	}
}
