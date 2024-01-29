/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:07:20 by abremont          #+#    #+#             */
/*   Updated: 2024/01/26 16:12:00 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

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
