/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:50:14 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/07 19:59:50 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *ret;

	i = -1;
	if (min >= max)
		return (0);
	if (!(ret = ((int*)malloc((max - min) * sizeof(int)))))
		return (0);
	while (++i < max - min)
		ret[i] = min + i;
	return (ret);
}
