/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:06:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 23:07:16 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		size;
	int		*int_array;
	char	**str_array;

	str_array = get_str_array(argc, argv);
	size = get_size(str_array);
	int_array = get_int_array(size, argc == 2, str_array);
	if (!is_valid(argc, size, int_array))
		print_error("Error\n");
	return (0);
}
