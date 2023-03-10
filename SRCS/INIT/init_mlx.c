/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <mabid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:07:50 by mabid             #+#    #+#             */
/*   Updated: 2023/01/13 19:38:50 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_all.h"

void	init_win(t_data *data)
{
	data->win = mlx_new_window(data->mlx, WIN_WIDTH, WIN_HEIGHT, "CUB3D");
	if (!data->win)
		exit_opt(data, "Error\n window failed");
	init_display(data);
}

void	init_color(t_data *data)
{
	data->ceiling.r = 0;
	data->ceiling.g = 0;
	data->ceiling.b = 0;
	data->ceiling.status = 0;
	data->floor.r = 0;
	data->floor.g = 0;
	data->floor.b = 0;
	data->floor.status = 0;
}

void	init_data(t_data *data)
{
	data->win = NULL;
	data->line = NULL;
	data->fd = 0;
	data->map = NULL;
	data->map3 = NULL;
	data->exit = 0;
	data->key_w = 0;
	data->key_d = 0;
	data->key_s = 0;
	data->key_a = 0;
	data->key_r = 0;
	data->key_l = 0;
	data->status_fc = 0;
	init_color(data);
}

void	init_img(t_data *data)
{
	data->north.status = 0;
	data->south.status = 0;
	data->west.status = 0;
	data->east.status = 0;
	data->north.img = NULL;
	data->south.img = NULL;
	data->west.img = NULL;
	data->east.img = NULL;
}

void	init_ray(t_data *data)
{
	data->ray.dir.x = 1;
	data->ray.dir.y = 1;
	data->ray.side = 0;
	data->ray.stepx = 0;
	data->ray.stepy = 0;
	data->ray.mapx = 1;
	data->ray.mapy = 1;
	data->ray.line_height = 0;
}
