/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:46:29 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 10:16:29 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_atoi_base(char *str, char *base);
int				*find_double(char *str, char to_find);
int				is_base(char *base, char c);

unsigned int	test_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| base[i] == '\f' || base[i] == '\n'
				|| base[i] == '\t' || base[i] == '\v' || base[i] == '\r')
			return (0);
		if (find_double(&base[i + 1], base[i]))
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

char			*alloc_memory(int nb, unsigned int nbase, int *len)
{
	unsigned int	u_nb;
	char			*str;

	*len = 1;
	if (nb < 0)
	{
		(*len)++;
		u_nb = -nb;
	}
	else
		u_nb = nb;
	u_nb = u_nb / nbase;
	while (u_nb > 0)
	{
		u_nb = u_nb / nbase;
		(*len)++;
	}
	if (!(str = (char *)malloc(sizeof(char) * ((*len) + 1))))
		return (0);
	return (str);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	u_nb;
	int				nb;
	unsigned int	nbase_to;
	int				len;
	char			*str;

	if (!(nbase_to = test_base(base_to)) || !test_base(base_from))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	if (!(str = alloc_memory(nb, nbase_to, &len)))
		return (0);
	str[len--] = 0;
	str[0] = (nb < 0) ? '-' : '0';
	if (nb < 0)
		u_nb = -nb;
	else
		u_nb = nb;
	if (u_nb == 0)
		str[0] = base_to[0];
	while (u_nb > 0)
	{
		str[len--] = base_to[u_nb % nbase_to];
		u_nb = u_nb / nbase_to;
	}
	return (str);
}
