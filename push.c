/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:49:59 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/25 03:49:34 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p(t_stack *src, t_stack *dest)
{
	if (src->top)
	{
		push(src, dest);
		ft_printf("p%c\n", dest->name);
	}
}
