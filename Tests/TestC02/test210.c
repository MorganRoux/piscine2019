/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test201.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:14:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 13:04:43 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int		main(void)
{
  	char s[6];
/*	char s2[10];
	char s3[10];	
	int t;
	
	t = ft_strlcpy(s, "abc", 6);	
	printf("1: abc - 2: %c%c%c%c%c%c - 3:%d\n", s[0],s[1],s[2],s[3],s[4],s[5],t);	

	if (s[3] == 0 && s[4] == 0 && s[5] == 0)
		printf("ok\n");

	t = ft_strlcpy(s, "abcdefgh", 6);	
	printf("1: abcdefgh - 2: %c%c%c%c%c%c - 3:%d\n", s[0],s[1],s[2],s[3],s[4],s[5],t);	

	printf("%u %u\n", strlcpy(s3, "abcd", 0),ft_strlcpy(s2, "abcd",0));
	printf("%s %s", s3,s2);
*/
	ft_strlcpy(s,"abcde",2);	
	
	return (0);
}
