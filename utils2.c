/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:57:35 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 23:11:40 by wooshin          ###   ########.fr       */
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
