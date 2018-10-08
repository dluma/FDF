/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:50:17 by dluma             #+#    #+#             */
/*   Updated: 2018/06/14 08:25:02 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	lst;

	str = (char*)s;
	lst = (char)c;
	while (*str != '\0')
		str++;
	while (*str != lst)
	{
		if (str == s)
			return (0);
		str--;
	}
	return ((char *)str);
}
