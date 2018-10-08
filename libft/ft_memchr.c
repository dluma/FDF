/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:37:57 by dluma             #+#    #+#             */
/*   Updated: 2018/06/16 15:53:04 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	str;

	i = 0;
	temp = (unsigned char*)s;
	str = (unsigned char)c;
	while (i < n)
	{
		if (temp[i] == str)
			return (temp + i);
		i++;
	}
	return (NULL);
}
