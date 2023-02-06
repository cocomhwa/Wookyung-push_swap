/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:57:35 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/06 23:42:58 by wooshin          ###   ########.fr       */
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

t_stack	make_stack_a(int argc, char **argv)
{
	int		size;
	int		*int_array;
	char	**str_array;
	t_stack	a;

	str_array = get_str_array(argc, argv);
	size = get_size(str_array);
	int_array = get_int_array(size, argc == 2, str_array);
	if (!is_valid(argc, size, int_array))
		print_error("Error\n");
	a = make_stack(int_array, size);
	a.name = 'a';
	return (a);
}

t_stack	make_stack_b(void)
{
	t_stack b;

	b = make_stack(NULL, 0);
	b.name = 'b';
	return (b);
}
