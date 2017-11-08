/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 15:21:44 by dsaadia           #+#    #+#             */
/*   Updated: 2017/11/07 19:45:15 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# define BUF_SIZE	30000
# define STSZ(x)	(x), sizeof(x)
# define EACCES_MS	": Permission denied\n"
# define EISDIR_MS	": Is a directory\n"
# define ENOENT_MS	": No such file or directory\n"
# define EIO_MS		": Input/Output error\n"
# define EINVAL_MS	": Invalid argument\n"

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_cat(char *av);
int		ft_err_cat(char *av);
void	ft_puterr(char *str);

#endif
