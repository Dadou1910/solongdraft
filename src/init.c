/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:49:38 by abremont          #+#    #+#             */
/*   Updated: 2024/01/24 13:12:53 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx-linux/mlx.h"
//#include "../includes/so_long.h"
int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "I love the present <3");
	mlx_loop(mlx);
	img = mlx_new_image(mlx, 1920, 1080);
}
