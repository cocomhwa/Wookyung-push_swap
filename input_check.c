/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:25:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 15:50:35 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*free_int_array(int	*array)
{
	free(array);
	return (NULL);
}

static int	is_sorted(int *int_array, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		if (int_array[i] <= int_array[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int	*is_valid(int argc, int size, int *int_array)
{
	if (!int_array)
		return (NULL);
	else if (check_duplication(size, int_array) || argc < 2)
		return (free_int_array(int_array));
	else if (is_sorted(int_array, size))
	{
		free_int_array(int_array);
		exit(1);
	}
	return (int_array);
}
