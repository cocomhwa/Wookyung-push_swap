/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:06:18 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/06 22:15:14 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack stack)
{
	t_node	*node;

	node = stack.top;
	if (node)
	do
	{
		ft_printf("%d\n", node->num);
		node = node->down;
	}
	while (node != stack.top);
	else
		ft_printf("빈 스택 있음\n");
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a = make_stack_a(argc, argv);
	b = make_stack(NULL, 0);
	push_swap(a, b);
	return (0);
}
