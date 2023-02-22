/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:23:54 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/22 20:51:28 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	make_stack_a(int argc, char **argv)
{
	int		size;
	int		*int_array;
	int		*index;
	char	**str_array;
	t_stack	a;

	str_array = get_str_array(argc, argv);
	size = get_size(str_array);
	int_array = get_int_array(size, argc == 2, str_array);
	if (!is_valid(argc, size, int_array))
		print_error("Error\n");
	index = nullguard(indexing(int_array, size));
	a = make_stack(index, size);
	free_int_array(int_array);
	free_int_array(index);
	a.name = 'a';
	a.size = size;
	return (a);
}

t_stack	make_stack_b(void)
{
	t_stack	b;

	b = make_stack(NULL, 0);
	b.name = 'b';
	return (b);
}
