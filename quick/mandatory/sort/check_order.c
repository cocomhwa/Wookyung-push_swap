/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:49 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:51 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_ascending(t_stack *stack, int len)
{
	t_node	*tmp;

	tmp = stack->head;
	len--;
	while (len)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
		len--;
	}
	return (1);
}

int	is_descending(t_stack *stack, int len)
{
	t_node	*tmp;

	tmp = stack->head;
	len--;
	while (len)
	{
		if (tmp->value < tmp->next->value)
			return (0);
		tmp = tmp->next;
		len--;
	}
	return (1);
}
