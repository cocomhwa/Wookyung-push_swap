/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:22:32 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/18 09:12:53 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (dst || src)
	{
		while (i < len)
		{
			if ((uintptr_t)dest <= (uintptr_t)source)
				dest[i] = source[i];
			else
				dest[len - 1 - i] = source[len - 1 - i];
			i++;
		}
	}
	return (dst);
}
