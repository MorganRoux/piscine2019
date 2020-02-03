/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test201.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:14:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:43:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
  	char s[6];
	char *test;

	test = ft_strncpy(s, "abc", 6);	
	printf("1: abc - 2: %c%c%c%c%c%C 3: %s\n", s[0],s[1],s[2],s[3],s[4],s[5], test);	

	if (s[3] == 0 && s[4] == 0 && s[5] == 0)
		printf("ok\n");

	test = ft_strncpy(s, "abcdefgh", 6);	
	printf("1: abcdef - 2: %c%c%c%c%c%C\n", s[0],s[1],s[2],s[3],s[4],s[5]);	


	return (0);
}
