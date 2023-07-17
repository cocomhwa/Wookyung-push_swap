/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:22:15 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:22:17 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_node	*create_node_string(char *argv, t_node *cur, t_stacks *stacks)
{
	char	**arr;
	int		i;
	t_node	*node;

	node = NULL;
	arr = ft_split(argv, ' ');
	if (!arr[0])
	{
		free(arr);
		print_error(stacks);
	}
	i = -1;
	while (arr[++i])
	{
		node = create_node(arr[i], cur, stacks);
		if (!stacks->a.head)
			stacks->a.head = node;
		stacks->a.tail = node;
		stacks->a.len++;
		cur = node;
	}
	while (--i >= 0)
		free(arr[i]);
	free(arr);
	return (node);
}
