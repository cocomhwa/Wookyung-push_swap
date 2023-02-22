/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:09:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 16:18:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*indexing(int *int_array, int size)
{
	int	i;
	int	j;
	int	*idx;

	idx = ft_calloc(size, sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		j = 0;
		idx[i] = 0;
		while (j < size)
		{
			if (int_array[i] > int_array[j])
				idx[i]++;
			j++;
		}
		i++;
	}
	return (idx);
}
