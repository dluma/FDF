/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:51:05 by dluma             #+#    #+#             */
/*   Updated: 2018/08/27 17:59:23 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define H 1000
# define W 1000
# define SCALE 20
# include <math.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include "get_next_line/get_next_line.h"

typedef struct	s_mlx
{
	void		*mlx;
	void		*win;
	char		*file_name;
	int			**map;
	int			width;
	int			height;
	int			color;
	int			p1[2];
	int			p2[2];

}				t_mlx;

void			read_map(t_mlx *mlx);

typedef struct	s_sd
{
	double		dx;
	double		dy;
	double		steps;
	double		x;
	double		y;
	double		xinc;
	double		yinc;
	int			i;
	int			x0;
	int			y0;
	int			x1;
	int			y1;

}				t_sd;

void			drawer(t_mlx *stuff);
void			drawer2(t_mlx *stuff);
int				func(int keycode, void *mlx);
void			dda(t_mlx *mlx, int color);
void			setup_x(t_mlx *mlx, int x, int y);
void			setup_y(t_mlx *mlx, int x, int y);

#endif
