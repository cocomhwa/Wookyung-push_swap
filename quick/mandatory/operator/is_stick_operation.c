/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stick_operation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:24:08 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:24:10 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_stick_two_operation(t_node_op *cur, char *op1, char *op2)
{
	if (cur->next && ft_strcmp(cur->op, op1) && \
		ft_strcmp(cur->next->op, op2))
		return (1);
	else if (cur->next && ft_strcmp(cur->op, op2) && \
			ft_strcmp(cur->next->op, op1))
		return (1);
	return (0);
}

int	is_stick_next_two_operation(t_node_op *cur, char *op1, char *op2)
{
	if (cur->next && cur->next->next && \
			ft_strcmp(cur->next->op, op1) && \
			ft_strcmp(cur->next->next->op, op2))
		return (1);
	else if (cur->next && cur->next->next && \
			ft_strcmp(cur->next->op, op2) && \
			ft_strcmp(cur->next->next->op, op1))
		return (1);
	return (0);
}
