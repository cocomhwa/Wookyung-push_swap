/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:57:47 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/18 09:13:26 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, s1len + 1);
	ft_strlcat(res + s1len, s2, s2len + 1);
	return (res);
}
