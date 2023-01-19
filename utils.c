/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:03:49 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/19 12:29:46 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == 45)
			sign += 1;
		if (str[i] < 48 && str[i] > 57)
			exit(1);
		if (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
		}
		if (sign == 1)
			result *= -1;
		else if (sign > 1)
			exit(1);
		i++;
	}
	return (result);
}

void	make_int(int len, int *int_array, char **argv)
{
	int	i;
	long num;

	i = 0;
	while (i < len)
	{
		num = ft_atoi(argv[i + 1]);
		if (num > 2147483647 || num < -2147483648)
			exit(1);
		int_array[i] = (int)num;
		i++;
	}
	return ;
}
