/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:21:24 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/08 12:01:36 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int l;

	l = -1;
	while (s[++l])
		;
	return (l);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = -1;
	if (!(dup = (char*)malloc(ft_strlen(src) * sizeof(char) + 1)))
		return (0);
	while (src[++i])
		(dup[i] = src[i]);
	dup[i] = 0;
	return (dup);
}
