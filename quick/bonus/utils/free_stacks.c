/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:22:43 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:22:44 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
