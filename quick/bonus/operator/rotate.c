/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:21:03 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:21:04 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	rotate(t_stack *stack)
{
	t_node	*tmp;

	if (stack->len < 2)
		return (0);
	tmp = stack->head;
	stack->head = stack->head->next;
	tmp->next = NULL;
	stack->tail->next = tmp;
	stack->tail = tmp;
	return (1);
}
