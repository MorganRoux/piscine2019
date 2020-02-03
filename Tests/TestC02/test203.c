/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test203.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:10:36 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:47:51 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *s1 = "ahAzgqZyQWEnck";
	char *s2 = "1235468";
	char *s3 = "68465:";

	int a, b, c;
	a = ft_str_is_numeric(s1);
	b = ft_str_is_numeric(s2);
	c = ft_str_is_numeric(s3);

	printf("010 - %d%d%d",a,b,c);

	return (0);
}
