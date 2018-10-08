/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:51:01 by dluma             #+#    #+#             */
/*   Updated: 2018/06/14 08:23:22 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t		ihay;
	size_t		inee;
	size_t		len;

	ihay = 0;
	inee = 0;
	len = 0;
	while (haystack[len])
		len++;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[ihay])
	{
		while (needle[inee] && needle[inee] == haystack[ihay + inee])
			inee++;
		if (needle[inee] == '\0')
			return ((char*)haystack + ihay);
		inee = 0;
		ihay++;
	}
	return (NULL);
}
