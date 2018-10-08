/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 16:36:55 by dluma             #+#    #+#             */
/*   Updated: 2018/06/18 13:33:10 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst)
	{
		i++;
		dst++;
	}
	if (i >= dstsize)
		return (dstsize + ft_strlen((char *)src));
	ft_strncat(dst, src, dstsize - i - 1);
	return (i + ft_strlen((char *)src));
}
