/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:39:07 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 19:00:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int test_char(char c, char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;
	int i = 0;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];

		while (str1[i] != 0)
		{
			if (test_char(str1[i], str1) == i)
				ft_putchar(str1[i]);
			i++;
		}
		i = 0;
		while (str2[i] != 0)
		{
			if ((test_char(str2[i], str1) == -1)
			&& (test_char(str2[i] ,str2) == i))
				ft_putchar(str2[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);

}
