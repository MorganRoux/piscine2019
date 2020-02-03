/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:21:08 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 18:31:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	char *str;
	if (argc== 2)
	{
		str = argv[1];
		while (*str != 0 && (*str == ' ' || *str == '\t'))
			   str++;	
		while (!(*str == 0 || *str == ' '|| *str == '\t'))
			ft_putchar(*str++);
	}
	ft_putchar('\n');
	return (0);
}
