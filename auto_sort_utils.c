/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_sort_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:42:48 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 20:50:54 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_chunk(double size)
{
	double	chunk;

	chunk = ((0.000000053 * (size * size)) + (0.03 * size) + 14.5);
	return ((int)chunk);
}

int	is_exist_stack(t_stack *stack)
{
	if (stack->top)
		return (1);
	else
		return (0);
}

int	max_in_first_half(t_stack *stack, int size)
{
	int		i;
	int		half;
	t_node	*current;

	i = 0;
	half = size / 2;
	current = stack->top;
	while (i < half)
	{
		if (current->num == size - 1)
			return (1);
		current = current->down;
		i++;
	}
	return (0);
}
