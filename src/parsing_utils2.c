/* ************************************************************************** */
/*										      */
/*								:::      ::::::::   */
/*   parsing_utils2.c                                   :+:      :+:    :+:   */
/*							   +:+ +:+	  +:+     */
/*   By: abremont <marvin@42.fr>		      +#+  +:+	+#+	 */
/*						      +#+#+#+#+#+   +#+	    */
/*   Created: 2024/02/01 11:16:07 by abremont	   #+#    #+#	      */
/*   Updated: 2024/02/02 15:05:17 by abremont         ###   ########.fr       */
/*										      */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_rectangle(t_data *data)
{
	int	i;

	i = 0;
	while (ft_strlen(data->map[i]) == ft_strlen(data->map[i + 1])
		&& data->map[i + 1])
	{
		i++;
		if (!data->map[i + 1])
		{
			data->width = ft_strlen(data->map[i]);
			return (1);
		}
	}
	return (0);
}

int	check_walls(t_data *data)
{
	int	j;
	int height;

	j = 0;
	height = data->height - 1;
	extract_map1(data);
	while (data->map[height][j])
	{
		if (data->map[0][j] != '1')
			return (0);
		if (data->map[height][j] != '1')
			return (0);
		j++;
	}
	while (height > 0)
	{
		if (data->map[height][0] != '1' ||
			data->map[height][ft_strlen(data->map[height])
			- 1] != '1')
			return (0);
		height--;
	}
	if (check_rectangle(data) == 0)
		return (0);
	return (1);
}

void	fl(char **map, int i, int j)
{
	if (map[i - 1][j] != '1' && map[i - 1][j] != 'P')
		map[i - 1][j] = 'P';
	if (map[i + 1][j] != '1' && map[i - 1][j] != 'P')
		map[i + 1][j] = 'P';
	if (map[i][j - 1] != '1' && map[i - 1][j] != 'P')
		map[i][j - 1] = 'P';
	if (map[i][j + 1] != '1' && map[i - 1][j] != 'P')
		map[i][j + 1] = 'P';
}

/*
int	main(void)
{
	t_data	*data;
	int	i;
	char	**map;

	i = 0;
	data = malloc(sizeof(t_data));
	init_struct(data);
	nb_lines_map(data);
	printf("%d\n", check_walls(data));
	//printf("%d\n", data->height);
	map = floodfill(data);
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	free(data);
}
*/
