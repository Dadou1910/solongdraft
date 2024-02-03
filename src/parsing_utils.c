/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:07:20 by abremont          #+#    #+#             */
/*   Updated: 2024/02/02 11:22:28 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_map(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
				data->p_count++;
			if (data->map[i][j] == 'E')
				data->e_count++;
			if (data->map[i][j] == 'C')
				data->c_count++;
			j++;
		}
		i++;
	}
	if (data->p_count == 1 && data->e_count == 1 && data->c_count >= 1)
		return (1);
	return (0);
}

void	init_struct(t_data *data)
{
	data->mlx = NULL;
	data->win = NULL;
	data->p = NULL;
	data->c = NULL;
	data->e = NULL;
	data->w = NULL;
	data->map = NULL;
	data->width = 0;
	data->height = 0;
	data->p_count = 0;
	data->c_count = 0;
	data->e_count = 0;
}
/*
int	main(void)
{
	t_data	data;

	init_struct(&data);
	printf("%d", check_map(&data));
}*/
