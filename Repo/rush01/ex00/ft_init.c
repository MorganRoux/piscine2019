/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebourdit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 14:15:06 by ebourdit          #+#    #+#             */
/*   Updated: 2019/08/11 18:56:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_erreur(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(arg[i] <= '4' && arg[i] > '0'))
				return (0);
		}
		else
		{
			if (arg[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int		ft_init(int *tab, int *rules, char *arg)
{
	int i;

	i = 0;
	if (ft_erreur(arg) == 0)
		return (0);
	while (i < 16)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (arg[i] != '\0')
	{
		if (i % 2 == 0)
		{
			rules[i / 2] = (arg[i] - 48);
		}
		i++;
	}
	return (1);
}
