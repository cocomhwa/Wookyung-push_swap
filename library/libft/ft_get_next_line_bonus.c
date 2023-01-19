/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:45:28 by wooshin           #+#    #+#             */
/*   Updated: 2022/12/28 12:33:27 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static ssize_t	read_full_single_line(int fd, char **buffer, char **backup)
{
	char	*tmp;
	ssize_t	read_result;

	read_result = 1;
	while (!ft_strchr(*backup, '\n') && read_result)
	{
		read_result = read(fd, *buffer, BUFFER_SIZE);
		if (read_result == -1)
			return (read_result);
		(*buffer)[read_result] = '\0';
		tmp = *backup;
		*backup = ft_strjoin2(tmp, *buffer);
		free(tmp);
		tmp = NULL;
	}
	return (read_result);
}

static char	*devide_line(char **backup)
{
	char	*devided_line;
	char	*newline_loaction;
	char	*tmp;

	newline_loaction = ft_strchr(*backup, '\n');
	tmp = ft_strdup(newline_loaction + 1);
	*(newline_loaction + 1) = '\0';
	devided_line = ft_strdup(*backup);
	free(*backup);
	*backup = NULL;
	*backup = ft_strdup(tmp);
	free(tmp);
	tmp = NULL;
	return (devided_line);
}

static char	*get_single_line(int fd, char **buffer, char **backup)
{
	char	*single_line;
	ssize_t	read_result;

	read_result = read_full_single_line(fd, buffer, backup);
	if (!**backup || read_result == -1)
	{
		free(*backup);
		*backup = NULL;
		return (NULL);
	}
	if (ft_strchr(*backup, '\n'))
		single_line = devide_line(backup);
	else
	{
		single_line = ft_strdup(*backup);
		free(*backup);
		*backup = NULL;
		return (single_line);
	}
	if (!**backup)
	{
		free(*backup);
		*backup = NULL;
	}
	return (single_line);
}

char	*get_next_line(int fd)
{
	static char	*backup[257];
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!backup[fd])
		backup[fd] = ft_strdup("");
	line = get_single_line(fd, &buffer, &backup[fd]);
	free(buffer);
	return (line);
}
