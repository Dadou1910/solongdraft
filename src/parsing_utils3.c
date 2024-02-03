# include "../includes/so_long.h"


void	floodfill_right(t_data *data, char **map)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i < data->height - 1)
	{
		while (j < data->width - 1)
		{
			if (map[i][j] == 'P')
				fl(map, i, j);
			j++;	
		}
		i++;
		j = 1;
	}
}

void	floodfill_left(t_data *data, char **map)
{
	int     i;
	int     j;

	i = data->height - 2;
	j = data->width - 2;
	while (i > 0)
	{
		while (j > 0)
		{
			if (map[i][j] == 'P')
				fl(map, i, j);
			j--;
		}
		i--;
		j = data->width - 2;
 	}
}

void	floodfill_down(t_data *data, char **map)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < data->width - 1)
	{
		while (i < data->height - 1)
		{
			if (map[i][j] == 'P')
				fl(map, i, j);
			i++;
		}
		i = 1;
		j++;
	}
}

void	floodfill_up(t_data *data, char **map)
{
	int	i;
	int	j;

	i = data->height - 1;
	j = 1;
	while (j < data->width - 1)
	{
		while (i > 0)
		{
			if (map[i][j] == 'P')
				fl(map, i, j);
			i--;
		}
		i = data->height - 1;
		j++;
	}
}

int	surround_P(char **map,int i,int j)
{
	int	count;

	count = 0;
	if (map[i][j + 1] == '1' || map[i][j + 1] == 'P')
		count++;
	if (map[i][j - 1] == '1' || map[i][j + 1] == 'P')
		count++;
	if (map[i + 1][j] == '1' || map[i][j + 1] == 'P')
		count++;
	if (map[i - 1][j] == '1' || map[i][j + 1] == 'P')
		count++;
	if (count == 4)
		return (1);
	else
		return (0);
}

int	read_P(t_data *data, char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (i == data->height - 2 && j == data->width - 2 &&
					surround_P(map, i, j) == 1)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

char	**floodfill(t_data *data)
{
	char	**map;

	map = data->map;
//	while (read_P(data, map) == 0)
//	{	
		floodfill_down(data, map);
		floodfill_right(data, map);
		floodfill_left(data, map);
		floodfill_up(data, map);
		floodfill_right(data, map);
//	}
	return (map);
}

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
	map = floodfill(data);
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	free(data);
}
