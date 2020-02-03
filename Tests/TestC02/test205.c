/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test204.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:15:29 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:53:21 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *s1 = "iAA";
	char *s2 = "{JHJHG";
	char *s3 = "JHKGVGFC";
	char *s4 = "";
	int a, b, c, d;
	a = ft_str_is_uppercase(s1);
	b = ft_str_is_uppercase(s2);
	c = ft_str_is_uppercase(s3);

	d = ft_str_is_uppercase(s4);
	printf("0011 - %d%d%d%d",a,b,c,d);

	return (0);
}
