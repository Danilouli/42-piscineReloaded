/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:21:08 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/08 11:28:21 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(char **argv)
{
	while (*(++argv))
	{
		ft_putstr(*argv);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	ft_print_params(argv);
	return (0);
}
