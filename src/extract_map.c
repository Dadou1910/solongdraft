/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:58:17 by abremont          #+#    #+#             */
/*   Updated: 2024/01/26 17:59:12 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	nb_lines_map(t_data *data)
{

}

char	**extract_line_1(int fd)
{
	int	i;
	int	j;
	char	**map;

	i = 0;
	j = 0;
	map = NULL;
	while (map[i][j])
	{
		map[i] = get_next_line(fd);
		while (map[i][j] != '\n')
			j++;
		map[i][j] = '\0';
		i++;
		j = 0;

	}
	return (map);
}

int	main(void)
{
	int	i;
	char	**line;
	int	fd;

	i = 0;
	fd = open("../map.ber", O_RDONLY);
	line = extract_line_1(fd);
	while (i)
	{
		printf("line %d : %s", i, line[i]);
		if (!line)
			break ;
		i++;
	}
	i = 0;
	while (line)
	{
		free(line[i]);
		i++;
	}	
	free(line);
	return (0);
}
