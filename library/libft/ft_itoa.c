/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 04:20:49 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/18 09:12:10 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(int n)
{
	long	numb;
	int		len;

	numb = n;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		numb *= -1;
	}
	while (numb != 0)
	{
		numb /= 10;
		len++;
	}
	return (len);
}

static void	devider(long inputnumb, int devidenumb, char *res, int i)
{
	char	numb;

	if (inputnumb == 0)
	{
		res[i] = '0';
		res[++i] = 0;
		return ;
	}
	while (devidenumb)
	{
		numb = inputnumb / devidenumb + '0';
		inputnumb %= devidenumb;
		devidenumb /= 10;
		res[i++] = numb;
	}
	res[i] = 0;
}

char	*ft_itoa(int n)
{
	char	*res;
	long	inputnumb;
	int		devidenumb;
	int		i;

	inputnumb = n;
	i = 0;
	res = malloc(sizeof(char) * (wordlen(n) + 1));
	if (!res)
		return (0);
	if (n < 0)
	{
		res[i++] = '-';
		inputnumb *= -1;
	}
	devidenumb = 1000000000;
	while (devidenumb > inputnumb)
		devidenumb /= 10;
	devider(inputnumb, devidenumb, res, i);
	return (res);
}
