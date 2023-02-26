/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:25:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/26 19:50:42 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*free_int_array(int	*array)
{
	free(array);
	return (0);
}

void	space_check(int argc, char **argv)
{
	int	i;
	int	j;
	int	space_count;

	i = 1;
	j = 0;
	space_count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				space_count++;
			j++;
		}
		i++;
	}
	if (space_count > argc - 1)
		print_error("Error\n");
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

static int	check_duplication(int len, int *int_array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (int_array[i] == int_array[j])
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	*is_valid(int argc, int size, int *int_array)
{
	if (!int_array)
		return (0);
	else if (check_duplication(size, int_array) || argc < 2)
		return (free_int_array(int_array));
	else if (is_sorted(int_array, size))
	{
		free_int_array(int_array);
		exit(1);
	}
	return (int_array);
}
