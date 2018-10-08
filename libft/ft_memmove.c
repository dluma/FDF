/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:17:38 by dluma             #+#    #+#             */
/*   Updated: 2018/06/16 11:09:35 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dbyte1;
	unsigned char	*sbyte2;

	dbyte1 = (unsigned char *)dst;
	sbyte2 = (unsigned char *)src;
	if (sbyte2 < dbyte1)
	{
		while (len)
		{
			dbyte1[len - 1] = sbyte2[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
