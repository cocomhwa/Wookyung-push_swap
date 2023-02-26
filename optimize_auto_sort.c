/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_auto_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:32:46 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/26 18:09:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	make_absolute_num(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

static int	is_pyramid(t_stack *stack, int dsnd_sum, int asnd_sum)
{
	int		substract_max;
	int		num;
	t_node	*current;

	current = stack->top;
	substract_max = stack->size - 1;
	while (substract_max >= 0)
	{
		num = current->num - (stack->size - substract_max);
		asnd_sum += make_absolute_num(num);
		num = current->num - substract_max;
		dsnd_sum += make_absolute_num(num);
		substract_max--;
		current = current->down;
	}
	if (dsnd_sum > asnd_sum)
		return (1);
	else
	{
		if (dsnd_sum == 0 || asnd_sum / dsnd_sum > 2)
			return (0);
		else
			return (1);
	}
}

int	rra_is_better(t_stack *stack)
{
	int	dscnd_sum;
	int	ascnd_sum;

	dscnd_sum = 0;
	ascnd_sum = 0;
	if (!is_pyramid(stack, dscnd_sum, ascnd_sum))
		return (1);
	return (0);
}
