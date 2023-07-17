/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:28:56 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:28:57 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node_op	*create_node_op(char *op)
{
	t_node_op	*node;

	node = (t_node_op *)malloc(sizeof(t_node_op));
	if (!node)
		return (NULL);
	node->op = op;
	node->next = NULL;
	return (node);
}

void	lstadd_back_op(t_list *list, char *op)
{
	t_node_op	*node;
	t_node_op	*cur;	

	node = create_node_op(op);
	cur = list->head;
	if (!cur)
	{
		list->head = node;
		list->tail = node;
		list->len++;
		return ;
	}
	else
	{
		while (cur->next)
			cur = cur->next;
		cur->next = node;
		list->tail = node;
		list->len++;
	}		
}
