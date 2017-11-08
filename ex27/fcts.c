/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:48:08 by dsaadia           #+#    #+#             */
/*   Updated: 2017/07/27 17:42:35 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_puterr(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}
