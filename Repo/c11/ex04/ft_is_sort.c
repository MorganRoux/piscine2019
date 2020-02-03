/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:00:26 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 14:20:54 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int signe;

	i = 0;
	signe = 0;
	if (length <= 1)
		return (1);
	signe = (*f)(tab[0], tab[1]);
	while (i < length - 1)
	{
		if (signe == 0)
			signe = (*f)(tab[i], tab[i + 1]);
		else if (((*f)(tab[i], tab[i + 1]) > 0 && signe < 0)
		|| ((*f)(tab[i], tab[i + 1]) < 0 && signe > 0))
			return (0);
		i++;
	}
	return (1);
}
