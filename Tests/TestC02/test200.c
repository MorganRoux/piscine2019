/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test200.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:59:32 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:39:15 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *s1 = "Helooooo";
  	char s2[9];
	char *test;

	test = ft_strcpy(s2, s1);
	printf("1: %s - 2: %s", s1, s2);	

	printf("\n1: %s - 2: %s", s1, test);	
	return (0);
}
