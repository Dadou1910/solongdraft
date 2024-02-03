/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:21 by abremont          #+#    #+#             */
/*   Updated: 2024/02/02 11:12:35 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <X11/Xlib.h>
# include <X11/Xutil.h>
# include <stdbool.h>

typedef struct s_data
{
	void	*mlx;
	void	*win;
	void	*p;
	void	*c;
	void	*e;
	void	*w;
	char	**map;
	int	width;
	int	height;
	int	p_count;
	int	c_count;
	int	e_count;
} t_data;

char	**extract_map1(t_data *data);
int	check_map(t_data *data);
void	fl(char **map, int i, int j);
void	init_struct(t_data *data);
int	nb_lines_map(t_data *data);
int	check_walls(t_data *data);
#endif
