/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:19 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_stack *from, t_stack *to)
{
	t_node	*tmp;

	if (from->len == 0)
	{
		return (0);
	}
	from->len--;
	to->len++;
	tmp = from->head;
	from->head = from->head->next;
	if (from->len == 0)
		from->tail = NULL;
	if (!to->head)
	{
		tmp->next = NULL;
		to->head = tmp;
		to->tail = tmp;
	}
	else
	{
		tmp->next = to->head;
		to->head = tmp;
	}
	return (1);
}
