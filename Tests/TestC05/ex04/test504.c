/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test504.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:18:30 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 10:28:19 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	printf("f(3) = 2 - %d\n", ft_fibonacci(3));
	printf("f(5) = 5 - %d\n", ft_fibonacci(5));
	printf("f(0) = 0 - %d\n", ft_fibonacci(0));
	printf("f(1) = 1 - %d\n", ft_fibonacci(1));
	printf("f(-1) = -1 - %d\n", ft_fibonacci(-1));
	printf("f(-10) = -1 - %d\n", ft_fibonacci(-10));
	printf("f(6) = 8 - %d\n", ft_fibonacci(6));
	return (0);
}
