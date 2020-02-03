/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 11:31:24 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 12:52:33 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_addr(long l)
{
	long	i;
	int		tmp;

	i = 0x1000000000000000;
	while (i > 0)
	{
		tmp = l / i;
		if (tmp < 10)
			ft_putchar(tmp + '0');
		else
			ft_putchar(tmp - 10 + 'a');
		l = l % i;
		i = i / 0x10;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	print_hexa(int count, int i, int size, unsigned char *c)
{
	while (i < 16)
	{
		if (count + i >= size)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			if (c[i] / 16 < 10)
				ft_putchar(c[i] / 16 + '0');
			else
				ft_putchar(c[i] / 16 - 10 + 'a');
			if (c[i] % 16 < 10)
				ft_putchar(c[i] % 16 + '0');
			else
				ft_putchar(c[i] % 16 - 10 + 'a');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	print_char(unsigned int count, unsigned int i,
		unsigned int size, unsigned char *c)
{
	i = 0;
	while (i < 16)
	{
		if (count + i >= size)
			break ;
		if (c[i] < 32)
			ft_putchar('.');
		else
			ft_putchar(c[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;
	unsigned char	*c;

	c = addr;
	count = 0;
	while (count < size)
	{
		i = 0;
		print_addr((long)c);
		print_hexa(count, i, size, c);
		i = 0;
		print_char(count, i, size, c);
		ft_putchar('\n');
		count = count + 16;
		c = c + 16;
		i = 0;
	}
	return (addr);
}
