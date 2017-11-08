/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:36:52 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/08 11:28:26 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int diff;

	while (!(diff = *(s1++) - *(s2++)) && *s1 && *s2)
		;
	return (diff);
}

void	ft_sort_params(char **argv)
{
	int	issort;
	int	i;

	issort = 0;
	i = 0;
	while (!issort)
	{
		issort = 1;
		while (argv[i + 1] && argv[i])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&(argv[i]), &(argv[i + 1]));
				issort = 0;
			}
			i++;
		}
		i = 0;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	argv++;
	ft_sort_params(argv);
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
	return (0);
}
