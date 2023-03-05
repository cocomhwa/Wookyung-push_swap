/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:01:59 by wooshin           #+#    #+#             */
/*   Updated: 2023/03/05 13:44:55 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/libft/libft.h"
#include "push_swap.h"

void	print_error(char *error_message)
{
	write(2, error_message, ft_strlen(error_message));
	exit(1);
}

static long	to_int(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] && i < 12)
	{
		if (str[i] == '-')
			sign += 1;
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] != '-')
				return (2147483648);
		}
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else if (sign > 1 || (sign == 1 && ft_strlen(str) == 1))
			return (2147483648);
		i++;
	}
	if (sign == 1)
		result *= -1;
	return (result);
}

int	*get_int_array(int len, int is_freeable, char **str_array)
{
	int		i;
	int		*int_array;
	long	num;

	i = 0;
	int_array = malloc(sizeof(int) * len);
	if (!int_array)
		return (0);
	while (i < len)
	{
		num = to_int(str_array[i]);
		if (num > 2147483647 || num < -2147483648 || !*(str_array[i]))
		{
			free(int_array);
			return (0);
		}
		int_array[i] = (int)num;
		i++;
	}
	if (is_freeable)
		free_arrays(str_array);
	return (int_array);
}
