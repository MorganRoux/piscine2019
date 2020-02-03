/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:31:11 by mroux             #+#    #+#             */
/*   Updated: 2019/08/07 14:23:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_sqrt(int nb, int min, int max)
{
	long m;

	m = (max + min) / 2;
	if (m == min || m == max)
		return (0);
	if (m * m == nb)
		return (m);
	if (m * m < nb)
		return (find_sqrt(nb, m, max));
	else
		return (find_sqrt(nb, min, m));
}

int		ft_sqrt(int nb)
{
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	return (find_sqrt(nb, 0, nb));
}
