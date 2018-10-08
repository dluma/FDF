/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 14:11:13 by dluma             #+#    #+#             */
/*   Updated: 2018/06/21 15:39:18 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t		ih;
	size_t		in;

	ih = 0;
	while (ih < len && hay[ih] != '\0')
	{
		in = 0;
		while (ih + in < len && hay[ih + in] == nee[in] && nee[in] != '\0')
			in++;
		if (nee[in] == '\0')
			return ((char *)hay + ih);
		ih++;
	}
	return (NULL);
}
