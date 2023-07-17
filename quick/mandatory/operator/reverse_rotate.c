/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:21 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate(t_stack *stack)
{
	t_node	*tmp;
	t_node	*cur;

	if (stack->len < 2)
		return (0);
	cur = stack->head;
	while (cur->next->next)
		cur = cur->next;
	tmp = cur->next;
	stack->tail = cur;
	stack->tail->next = NULL;
	tmp->next = stack->head;
	stack->head = tmp;
	return (1);
}
