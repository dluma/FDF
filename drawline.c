/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 17:25:05 by dluma             #+#    #+#             */
/*   Updated: 2018/08/27 17:26:29 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			abs(int n)
{
	return ((n > 0 ? n : (n * (-1))));
}

void		dda(t_mlx *mlx, int color)
{
	t_sd	*sd;

	sd = (t_sd*)malloc(sizeof(t_sd));
	sd->x0 = mlx->p1[0];
	sd->x1 = mlx->p2[0];
	sd->y0 = mlx->p1[1];
	sd->y1 = mlx->p2[1];
	sd->dx = sd->x1 - sd->x0;
	sd->dy = sd->y1 - sd->y0;
	sd->steps = fabs(sd->dx) > fabs(sd->dy) ? (fabs(sd->dx)) : fabs(sd->dy);
	sd->xinc = sd->dx / (float)sd->steps;
	sd->yinc = sd->dy / (float)sd->steps;
	sd->x = sd->x0;
	sd->y = sd->y0;
	sd->i = 0;
	while (sd->i <= sd->steps)
	{
		mlx_pixel_put(mlx->mlx, mlx->win, (sd->x + sd->y / 2) + 300, \
				(sd->y - sd->x / 2) + 400, color);
		sd->x += sd->xinc;
		sd->y += sd->yinc;
		sd->i++;
	}
}

void		setup_x(t_mlx *mlx, int x, int y)
{
	mlx->p1[0] = ((x - 1) * SCALE) - mlx->map[y][x - 1];
	mlx->p1[1] = (y * SCALE) - mlx->map[y][x - 1];
	mlx->p2[0] = (x * SCALE) - mlx->map[y][x];
	mlx->p2[1] = (y * SCALE) - mlx->map[y][x];
}

void		setup_y(t_mlx *mlx, int x, int y)
{
	mlx->p1[0] = (x * SCALE) - mlx->map[y - 1][x];
	mlx->p1[1] = ((y - 1) * SCALE) - mlx->map[y - 1][x];
	mlx->p2[0] = (x * SCALE) - mlx->map[y][x];
	mlx->p2[1] = (y * SCALE) - mlx->map[y][x];
}
