/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:15:23 by dluma             #+#    #+#             */
/*   Updated: 2018/08/27 17:40:33 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"
#include "get_next_line/get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	t_mlx	*fin;

	if (ac == 2)
	{
		fin = (t_mlx*)malloc(sizeof(t_mlx));
		fin->file_name = av[1];
		read_map(fin);
		fin->mlx = mlx_init();
		fin->win = mlx_new_window(fin->mlx, W, H, "fdf");
		drawer(fin);
		drawer2(fin);
		mlx_key_hook(fin->win, func, fin);
		mlx_loop(fin->mlx);
	}
	else
	{
		write(1, "Error, no map\n", 14);
	}
	return (0);
}
