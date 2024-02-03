/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:49:38 by abremont          #+#    #+#             */
/*   Updated: 2024/02/02 11:25:17 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	init_win(t_data *data)
{
	data->win = mlx_new_window(data->mlx, (data->width) * 64,
			(data->height) * 64, "so_long");
	if (data->win == NULL)
		return (0);
	return (1);
}
/*
int	init_img(t_data *data)
{
	data.img = mlx_new_image(data.mlx, (data.width) * 64, (data.height) * 64);
	data.p = 
	data.c =
	data.e = 
	data.w = 

}

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
}*/
