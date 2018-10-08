/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 09:48:20 by dluma             #+#    #+#             */
/*   Updated: 2018/06/16 11:12:09 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = dst;
	while (i < n)
	{
		s[i] = (((unsigned char *)src)[i]);
		if (((unsigned char)c) == s[i])
			return (s + i + 1);
		i++;
	}
	return (NULL);
}
