/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:28:59 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:29:00 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stacks(t_stacks *stacks)
{
	t_node	*cur;
	t_node	*tmp;

	cur = stacks->a.head;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	cur = stacks->b.head;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
}

void	free_list(t_list *list)
{
	t_node_op	*cur;
	t_node_op	*tmp;

	cur = list->head;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
}
