/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:37:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/23 17:58:49 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manual_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = a->size;
	if (size == 2)
		r(a);
	else if (size == 3)
		sort_three_num();
	else if (size == 5)
		sort_five_num();
	else
		auto_sort(a, b);
}
