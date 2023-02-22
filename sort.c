/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:55:48 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 18:25:04 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *a, t_stack *b)
{
	if (a->size <= 5)
		//hand_sort(a, b);
		ft_printf("size less than 5\n");
	auto_sort(a, b);
}
