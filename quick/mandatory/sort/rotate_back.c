/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:57 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:58 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_back(t_stacks *stacks, int ra_cnt, int rb_cnt)
{
	while (ra_cnt > 0 || rb_cnt > 0)
	{
		if (ra_cnt > 0 && rb_cnt > 0)
			operator("rrr", stacks);
		else if (ra_cnt > 0)
			operator("rra", stacks);
		else if (rb_cnt > 0)
			operator("rrb", stacks);
		ra_cnt--;
		rb_cnt--;
	}
}
