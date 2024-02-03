/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:58:17 by abremont          #+#    #+#             */
/*   Updated: 2024/02/02 11:25:39 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	nb_lines_map(t_data *data)
{
	int		fd;
	char	*line;

	fd = open("./map/map.ber", O_RDONLY);
	data->height = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		data->height++;
		free(line);
	}
	close(fd);
	return (data->height);
}

char	**extract_map1(t_data *data)
{
	int	i;
	int	j;
	int	fd;

	i = 0;
	j = 0;
	nb_lines_map(data);
	fd = open("./map/map.ber", O_RDONLY);
	data->map = malloc(sizeof(char *) * (data->height + 1));
	if (!data->map)
		return (NULL);
	while (1)
	{
		data->map[i] = get_next_line(fd);
		if (!data->map[i])
			break ;
		while (data->map[i][j] != '\n')
			j++;
		data->map[i][j] = '\0';
		i++;
		j = 0;
	}
	data->map[i] = NULL;
	close(fd);
	return (data->map);
}
/*
int	main(void)
{
	int	i;
	char	**map;
	t_data	data;

	i = 0;
	map = extract_map1(&data);
	while (1)
	{
		if (!map[i])
			break ;
		printf("line %d : %s\n", i + 1, map[i]);
		i++;
	}
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
	return (0);
}*/
