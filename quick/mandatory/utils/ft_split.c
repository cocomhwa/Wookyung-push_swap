/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:29:03 by wooshin           #+#    #+#             */
/*   Updated: 2023/07/18 02:29:04 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_wordcnt(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			cnt++;
		}
	}
	return (cnt);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (0);
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	ft_free_malloc(char **result, size_t k)
{
	size_t	i;

	i = 0;
	while (i < k)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

int	ft_cutstr(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			result[k] = ft_strndup(&s[i], j);
			if (!result[k])
				return (ft_free_malloc(result, k));
			i += j;
			k++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	wordcnt;
	char	**result;

	if (!s)
		return (0);
	wordcnt = ft_wordcnt(s, c);
	result = (char **)malloc(sizeof(char *) * (wordcnt + 1));
	if (!result)
		return (0);
	result[wordcnt] = 0;
	if (!ft_cutstr(s, c, result))
		return (0);
	return (result);
}
