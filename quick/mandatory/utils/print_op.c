/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:29:14 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:29:19 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_op(t_list	*list)
{
	t_node_op	*cur;
	char		*str;

	cur = list->head;
	while (cur)
	{
		str = cur->op;
		ft_putstr(str);
		ft_putstr("\n");
		cur = cur->next;
	}
}
