/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:50:30 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 12:48:27 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_non_printable(unsigned char c)
{
	unsigned char tmp;

	ft_putchar('\\');
	tmp = c / 16;
	if (tmp < 10)
		ft_putchar(tmp + '0');
	else
		ft_putchar(c % 16 - 10 + 'a');
	tmp = c % 16;
	if (tmp < 10)
		ft_putchar(tmp + '0');
	else
		ft_putchar(c % 16 - 10 + 'a');
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 32 || c == 127)
			print_non_printable(c);
		else
			ft_putchar(str[i]);
		i++;
	}
}
