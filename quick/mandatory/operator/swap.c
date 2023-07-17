/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:25 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:25 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack *stack)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (stack->len < 2)
		return (0);
	tmp1 = stack->head;
	tmp2 = stack->head->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	stack->head = tmp2;
	stack->head->next = tmp1;
	if (stack->len == 2)
		stack->tail = tmp1;
	return (1);
}
