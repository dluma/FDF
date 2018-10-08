/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:26:45 by dluma             #+#    #+#             */
/*   Updated: 2018/08/25 14:32:07 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		line_reader(const int fd, char **line)
{
	int		i;
	char	*tmp;
	char	*str;

	i = 0;
	str = ft_strnew(BUFF_SIZE);
	if (!(*line))
		(*line) = ft_strnew(0);
	tmp = NULL;
	while ((i = read(fd, str, BUFF_SIZE) > 0))
	{
		tmp = ft_strjoin((*line), str);
		free((*line));
		(*line) = tmp;
		if (ft_strchr(str, '\n'))
			break ;
		ft_strclr(str);
	}
	free(str);
	return (i);
}

int		line_sort(char **res, char **line, int ret, const int fd)
{
	char	*tmp;

	tmp = NULL;
	if (res[fd])
	{
		(*line) = res[fd];
		res[fd] = ft_strchr((*line), '\n');
	}
	if (!res[fd])
		ret = line_reader(fd, line);
	if ((res[fd] = ft_strchr((*line), '\n')))
	{
		res[fd] = ft_strdup(res[fd] + 1);
		ft_strclr(ft_strchr((*line), '\n'));
		tmp = ft_strdup(*line);
		free((*line));
		(*line) = tmp;
	}
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		*tmp;
	static char	*res[22];

	tmp = NULL;
	ret = 1;
	if (fd < 0 || line == NULL || (read(fd, tmp, 0) < 0) || (BUFF_SIZE < 1))
		return (-1);
	(*line) = NULL;
	ret = line_sort(res, line, ret, fd);
	if (ret > 0 || ft_strlen((*line)))
		return (1);
	return (ret);
}
