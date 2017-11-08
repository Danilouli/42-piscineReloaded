/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 15:30:10 by dsaadia           #+#    #+#             */
/*   Updated: 2017/11/07 19:40:18 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int ac, char **av)
{
	char	b;
	int		fd;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
	}
	if (ac == 2)
	{
		av++;
		while (*av)
		{
			ft_cat(*av);
			av++;
		}
	}
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
