/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test202.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:54:56 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:46:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char *s1 = "ahAzgqZyQWEnck";
	char *s2 = "jh@km";
	char *s3 = "{kjh";

	int a, b, c;
	a = ft_str_is_alpha(s1);
	b = ft_str_is_alpha(s2);
	c = ft_str_is_alpha(s3);

	printf("100 - %d%d%d",a,b,c);

	return (0);
}
