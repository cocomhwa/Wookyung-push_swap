/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:25:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 23:10:08 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*free_int_array(int	*array)
{
	free(array);
	return (0);
}

int	*is_valid(int argc, int size, int *int_array)
{
	if (!int_array)
		return (0);
	if (check_duplication(size, int_array) || argc < 2)
		return (free_int_array(int_array));
	return (int_array);
}
