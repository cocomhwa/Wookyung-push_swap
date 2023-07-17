/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:55 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:56 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_pivot(int *pivot, t_stack stack, int len)
{
	int		cnt;
	t_node	*cur;
	t_node	*tmp;
	int		i;
	int		j;

	i = -1;
	cur = stack.head;
	while (++i < len)
	{
		cnt = 0;
		tmp = stack.head;
		j = -1;
		while (++j < len)
		{
			if (cur->value > tmp->value)
				cnt++;
			tmp = tmp->next;
		}
		if (cnt == (len / 3))
			pivot[SMALL] = cur->value;
		else if (cnt == len / 3 * 2)
			pivot[BIG] = cur->value;
		cur = cur->next;
	}
}
