/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:48:08 by dluma             #+#    #+#             */
/*   Updated: 2018/08/27 14:45:19 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		count(t_mlx *mlx)
{
	int		fd;
	char	*line;
	int		row;
	int		col;
	char	**split;

	row = 0;
	if ((fd = open(mlx->file_name, O_RDONLY)) < 0)
		exit(0);
	while (get_next_line(fd, &line) == 1)
	{
		row++;
		split = ft_strsplit(line, ' ');
		col = 0;
		while (split[col])
			col++;
		if (row == 1)
			mlx->width = col;
		if (mlx->width != col)
			exit(0);
	}
	close(fd);
	mlx->height = row;
}

void		read_map(t_mlx *mlx)
{
	char		**split;
	char		*line;
	int			fd;
	int			i;
	int			j;

	j = 0;
	count(mlx);
	if ((fd = open(mlx->file_name, O_RDONLY)) < 0)
		exit(0);
	mlx->map = (int**)malloc(sizeof(int*) * mlx->height);
	while (get_next_line(fd, &line) == 1)
	{
		i = 0;
		mlx->map[j] = (int*)malloc(sizeof(int) * mlx->width);
		split = ft_strsplit(line, ' ');
		while (split[i])
		{
			mlx->map[j][i] = ft_atoi(split[i]);
			i++;
		}
		j++;
	}
}
