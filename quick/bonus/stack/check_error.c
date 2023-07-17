/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:22:02 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:22:03 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_error(t_stacks *stacks)
{
	t_node	*cur;
	t_node	*tmp;
	int		i;
	int		j;

	cur = stacks->a.head;
	i = 0;
	while (i < stacks->a.len)
	{
		j = i + 1;
		tmp = cur->next;
		while (j < stacks->a.len)
		{
			if (cur->value == tmp->value)
				print_error(stacks);
			tmp = tmp->next;
			j++;
		}
		cur = cur->next;
		i++;
	}
}
