/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:06:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/05 18:04:10 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack stack)
{
	t_node	*node;
	
	node = stack.top;
	do
	{
		ft_printf("%d\n", node->num);
		node = node->down;
	}
	while (node != stack.top);
}

int	main(int argc, char **argv)
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
	print_stack(a);
	push_swap(size, int_array);
	return (0);
}
