/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:38:18 by abremont          #+#    #+#             */
/*   Updated: 2024/01/26 17:09:40 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*read_to_stash(int fd, char *stash)
{
	char	*buffer;
	char	*tmp;
	int		bytes;

	bytes = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(stash, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (free(stash), free(buffer), NULL);
		buffer[bytes] = '\0';
		tmp = stash;
		stash = ft_strjoin(stash, buffer);
		free(tmp);
		if (!stash)
			return (free(buffer), NULL);
	}
	return (free(buffer), stash);
}

char	*extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (stash[i] == '\0')
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i])
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*new_stash(char *stash)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\0')
		return (free(stash), NULL);
	str = malloc(sizeof(char) * (ft_strlen((const char *)&stash[i]) + 1));
	if (!str)
		return (free(stash), NULL);
	i++;
	while (stash[i + j])
	{
		str[j] = stash[i + j];
		j++;
	}
	str[j] = '\0';
	return (free(stash), str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	if (!stash)
		return (NULL);
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = new_stash(stash);
	if (!line)
	{
		if (stash)
			free(stash);
		return (NULL);
	}
	return (line);
}
/*
#include<stdio.h>
#include<fcntl.h>
int	main(void)
{
	char	*line;
	int	i;
	int	fd1;
	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	while (i <= 4)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}*/
