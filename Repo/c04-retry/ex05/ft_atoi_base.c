/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:10:42 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 18:27:32 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			find_double(char *str, char to_find)
{
	while (*str != 0)
	{
		if (*str == to_find)
			return (1);
		str++;
	}
	return (0);
}

int			is_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int			map_to_value(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int			init(int *mult, int *total, int *signe, char *base)
{
	int i;

	*mult = 1;
	*total = 0;
	*signe = 1;
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| base[i] == '\f' || base[i] == '\n'
				|| base[i] == '\t' || base[i] == '\v')
			return (0);
		if (find_double(&base[i + 1], base[i]))
			return (0);
		i++;
	}
	return (i);
}

int			ft_atoi_base(char *str, char *base)
{
	int	total;
	int	signe;
	int	nbase;
	int	i;
	int	mult;

	i = 0;
	nbase = init(&mult, &total, &signe, base);
	if (nbase < 2)
		return (0);
	while (*str == '\f' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		signe = (*str++ == '-') ? signe * (-1) : signe;
	while (str[i] != '\0' && is_base(base, str[i]))
		i++;
	while (0 < i)
	{
		total += mult * map_to_value(str[i - 1], base);
		mult = mult * nbase;
		i--;
	}
	return (total * signe);
}
