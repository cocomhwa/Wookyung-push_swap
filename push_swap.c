/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:31:03 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 20:47:18 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack a, t_stack b)
{
	ft_printf("-----------------\n");
	print_stack(a, b);
	ft_printf("-----------------\n");
//	p(&a, &b);
	reverse_sort(&a, &b);
	ft_printf("-----------------\n");
	print_stack(a, b);
	ft_printf("-----------------\n");
//	sort(a, b);
	return ;
}
