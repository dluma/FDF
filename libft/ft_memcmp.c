/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:35:33 by dluma             #+#    #+#             */
/*   Updated: 2018/06/16 11:17:05 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		comp;

	i = 0;
	while (i < n)
	{
		comp = *(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i);
		if (comp)
			return (comp);
		i++;
	}
	return (0);
}
