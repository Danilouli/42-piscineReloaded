/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 15:25:28 by dsaadia           #+#    #+#             */
/*   Updated: 2017/11/07 19:45:08 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_cat(char *av)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		ft_err_cat(av);
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ft_err_cat(av))
			return ;
		buf[ret] = 0;
		ft_putstr(buf);
	}
}

int		ft_err_cat(char *av)
{
	if (errno)
	{
		write(2, STSZ("cat: "));
		ft_puterr(av);
		if (errno == EACCES)
			write(2, STSZ(EACCES_MS));
		else if (errno == EISDIR)
			write(2, STSZ(EISDIR_MS));
		else if (errno == ENOENT)
			write(2, STSZ(ENOENT_MS));
		else if (errno == EIO)
			write(2, STSZ(EIO_MS));
		else if (errno == EINVAL)
			write(2, STSZ(EINVAL_MS));
		else
			write(2, STSZ("Unknown error.\n"));
		return (1);
	}
	return (0);
}
