/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:25:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/22 22:27:42 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*free_array(int	*array)
{
	free(array);
	array = 0;
	return (0);
}

static int	get_size_arr(char **arrays)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (arrays[i++])
		size++;
	return (size);
}

int	*input_check(int argc, char **argv)
{
	int		*int_array;
	int		size;
	char	**arrays;

	if (argc == 2)
	{
		arrays = ft_split(argv[1], ' ');
		if (!arrays)
			return (0);
		size = get_size_arr(arrays);
	}
	else if (argc > 2)
	{
		arrays = argv + 1;
		size = argc -1;
	}
	else
		return (0);
	int_array = make_valid_int(size, arrays);
	if (!int_array)
		return (0);
	free(arrays);
	if (check_duplication(size, int_array))
		return (free_array(int_array));
	return (int_array);
}
