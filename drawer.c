/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 17:01:50 by dluma             #+#    #+#             */
/*   Updated: 2018/08/27 17:42:46 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		drawer(t_mlx *stuff)
{
	int		y;
	int		x;

	y = 0;
	while (y < stuff->height)
	{
		x = 1;
		while (x < stuff->width)
		{
			setup_x(stuff, x, y);
			if (stuff->map[y][x] != 0 && stuff->map[y][x - 1] != 0)
				dda(stuff, 0xFFFFFF);
			else
				dda(stuff, 0xFF00FF);
			x += 1;
		}
		y++;
	}
}

void		drawer2(t_mlx *stuff)
{
	int		x;
	int		y;

	x = 0;
	while (x < stuff->width)
	{
		y = 1;
		while (y < stuff->height)
		{
			setup_y(stuff, x, y);
			if (stuff->map[y][x] != 0 && stuff->map[y - 1][x] != 0)
				dda(stuff, 0xFFFFFF);
			else
				dda(stuff, 0xFF00FF);
			y += 1;
		}
		x++;
	}
}
