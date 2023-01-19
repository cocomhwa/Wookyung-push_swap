/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:03:49 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/19 13:39:25 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_error(char *error_message)
{
	write(2, &error_message, ft_strlen(error_message));
	exit(1);
}

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
			print_error("Error\n");
		i++;
	}
	return (result);
}

static void	check_duplication(int len, int *int_array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (int_array[i] == int_array[j])
				print_error("Error\n");
			else
				j++;
		}
		i++;
	}
}

void	make_valid_int(int len, int *int_array, char **argv)
{
	int		i;
	long	num;

	i = 0;
	while (i < len)
	{
		num = ft_atoi(argv[i + 1]);
		if (num > 2147483647 || num < -2147483648)
			print_error("Error\n");
		int_array[i] = (int)num;
		i++;
	}
	check_duplication(len, int_array);
	return ;
}
