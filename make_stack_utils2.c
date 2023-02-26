/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:00:54 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/26 20:51:40 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_arrays(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i])
		free(str_array[i++]);
}

char	**get_str_array(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	return (argv + 1);
}

int	get_size(char **str_array)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str_array[i++])
		size++;
	return (size);
}

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
