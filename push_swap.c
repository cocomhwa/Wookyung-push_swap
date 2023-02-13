/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:31:03 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/13 13:55:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack a, t_stack b)
{
//	print_stack(a, b);
	reverse_sort(&a, &b);
//	print_stack(a, b);
	complete_sort(&b, &a);
//	print_stack(a, b);
	return ;
}
