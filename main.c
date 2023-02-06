/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:06:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 01:56:31 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack a, t_stack b)
{
	t_node	*a_node;
	t_node	*b_node;
	int	is_first;

	is_first = 1;
	a_node = a.top;
	b_node = b.top;
	if (a_node || b_node)
	{
		while (1)
		{
			if ((is_first || a_node != a.top) && a_node)
			{
				ft_printf("%d", a_node->num);
				a_node = a_node->down;
			}
			ft_printf("           ");
			if ((is_first || b_node != b.top) && b_node)
			{
				ft_printf("%d", b_node->num);
				b_node = b_node->down;
			}
			ft_printf("\n");
			is_first = 0;
			if(a_node == a.top && b_node == b.top)
				break ;
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a = make_stack_a(argc, argv);
	b = make_stack_b();
	push_swap(a, b);
	return (0);
}
