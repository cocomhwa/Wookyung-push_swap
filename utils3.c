/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:31:40 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 20:53:44 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_stack *stack)
{
	t_node	*node;
	t_node	*min;

	node = stack->top->down;
	min = stack->top;
	while (1)
	{
		if (min->num > node->num)
			min = node;
		node = node->down;
		if (node == stack->top)
			break ;
	}
	min->idx = 0;
	return (min);
}

void	reverse_sort(t_stack *src, t_stack *dest)
{
	t_node	*min;

	while (src->top)
	{
		min = find_min(src);
		while (src->top != min)
			r(src);
		p(src, dest);
	}
}

void	complete_sort(t_stack *src, t_stack *dest)
{
	while (src->top)
		p(src, dest);
}
