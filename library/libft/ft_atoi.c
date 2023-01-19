/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:06:50 by wooshin           #+#    #+#             */
/*   Updated: 2022/07/09 21:38:40 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	checkspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (checkspace(str[i]) && str[i] != 0)
		i++;
	if ((str[i] == 43 || str[i] == 45) && str[i] != 0)
	{
		if (str[i] == 45)
			sign = !sign;
		i++;
	}
	while (str[i] != 0 && (str[i] >= 48 && str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (sign)
		return (-result);
	return (result);
}
