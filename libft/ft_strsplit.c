/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:38:44 by dluma             #+#    #+#             */
/*   Updated: 2018/06/21 10:42:52 by dluma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char		**stra;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	if (s == 0 || c == 0)
		return (0);
	stra = (char **)malloc(sizeof(*stra) * (ft_strlen(s) + 1));
	if (stra == NULL)
		return (NULL);
	while (s[i])
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			stra[j++] = ft_strsub(s, i, len);
			i = i + len;
		}
	stra[j] = 0;
	return (stra);
}
