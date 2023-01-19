/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:24:49 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/13 23:25:59 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	checker(int n, int fd)
{
	if (!n)
	{
		write(fd, "0", 1);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	inputnumb;
	int		devidenumb;
	char	numb;

	inputnumb = n;
	if (fd >= 0)
	{
		checker(n, fd);
		if (n < 0)
		{
			write(fd, "-", 1);
			inputnumb *= -1;
		}
		devidenumb = 1000000000;
		while (devidenumb > inputnumb)
			devidenumb /= 10;
		while (devidenumb)
		{
			numb = inputnumb / devidenumb + '0';
			inputnumb %= devidenumb;
			devidenumb /= 10;
			write(fd, &numb, 1);
		}
	}
	return ;
}
