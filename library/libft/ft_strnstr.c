/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:52:42 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/18 09:11:16 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = -1;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[++i] && i < len)
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while ((needle[j] != 0 || haystack[j + i] != 0)
				&& (needle[j] == haystack[j + i]) && j + i < len)
				j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
	}
	return (0);
}
