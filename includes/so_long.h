/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:21 by abremont          #+#    #+#             */
/*   Updated: 2024/01/24 14:30:35 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/get_next_line.h"
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
	int	p_count;
	int	c_count;
	int	e_count;
} t_data
#endif
