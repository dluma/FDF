/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:59:37 by dluma             #+#    #+#             */
/*   Updated: 2018/06/18 14:07:31 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (!s1 || !s2)
		return (0);
	while (ft_strlen(str1) == ft_strlen(str2))
	{
		if (ft_strcmp(str1, str2) != '\0')
			return (0);
		return (1);
	}
	return (0);
}
