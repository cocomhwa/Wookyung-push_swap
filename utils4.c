/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:09:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/20 20:28:07 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_array(int *int_array, int size)
{
	int	i;
	int	j;
	int	idx;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (int_array[i] > int_array[j])
				ft_swap(&int_array[i], &int_array[j]);
			j++;
		}
		i++;
	}
}

int	get_pivot(int *int_array, int size, int bunmo, int bunza)
{
	int	pivot;

	pivot = int_array[size * bunza / bunmo];
	return (pivot);
}



void	indexing(int *int_array, int size)
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
}
