/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:11:03 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/08 11:32:09 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (++i <= nb)
		res = res * i;
	return (res);
}
