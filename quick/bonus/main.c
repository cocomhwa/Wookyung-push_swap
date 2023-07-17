/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:19:59 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:20:00 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	stacks_value_null(t_stacks *stacks)
{
	stacks->a.head = NULL;
	stacks->a.tail = NULL;
	stacks->a.len = 0;
	stacks->b.head = NULL;
	stacks->b.tail = NULL;
	stacks->b.len = 0;
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	char		*op;

	if (argc < 2)
		return (0);
	stacks_value_null(&stacks);
	parsing_n_init_stack(argc, argv, &stacks);
	check_error(&stacks);
	while (1)
	{
		op = get_next_line(0);
		if (!op)
			break ;
		operator(op, &stacks);
	}
	if (is_ascending(&stacks.a, stacks.a.len) && stacks.b.len == 0)
		write(1, "OK\n", 3);
	else
		write(2, "KO\n", 3);
	return (0);
}
