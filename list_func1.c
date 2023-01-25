/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:15:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 21:25:24 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_linked_list(int content)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->next = newnode;
	newnode->previous = newnode;
	return (newnode);
}

void	lstadd_front(t_node *lst, t_node *new)
{
	new->next = lst;
	lst = new;
}

t_node	*lstlast(t_node *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void	lstadd_back(int num, t_node *tail)
{
	t_node *newnode = malloc(sizeof(t_node));

	newnode->content = num;
	newnode->next = tail->next;
	newnode->previous = tail->next;
	tail->next = newnode;
	tail->previous = newnode;
}

t_node *make_stack(int *int_array, int size)
{
	int	i;

	i = 0;
	t_node	*tail = new_linked_list(int_array[i++]);
	while (i < size)
	{
		lstadd_back(int_array[i++], tail);
		tail = tail->next;
	}
	return (tail->next);
}
