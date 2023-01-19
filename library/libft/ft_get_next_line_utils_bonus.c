/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:45:54 by wooshin           #+#    #+#             */
/*   Updated: 2022/12/28 12:32:38 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (0);
	if (s1)
		while (s1[++i] != 0)
			res[i] = s1[i];
	while (s2[j] != 0)
		res[i++] = s2[j++];
	res[s1len + s2len] = '\0';
	return (res);
}
