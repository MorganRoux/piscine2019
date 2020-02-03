/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test305.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:21:46 by mroux             #+#    #+#             */
/*   Updated: 2019/08/05 19:52:55 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int size);

int		main(void)
{
	char s10[20] = "";
	char s20[20] = "";
	char s1[20] = "abcdef";	
	char s2[20] = "abcdef";
	printf("%lu %u\n", strlcat(s1, "salut0123456",0),  ft_strlcat(s2, "salut0123456", 0));
	printf("%s %s\n", s1, s2);
	printf("%lu %u\n", strlcat(s10, "salut0123456",0),  ft_strlcat(s20, "salut0123456", 0));
	printf("%s %s\n", s10, s20);

	
/*	printf("%lu %u\n", strlcat(s1, "abcdefghijkl", 10),  ft_strlcat(s2, "abcdefghijkl", 10));
	printf("%s %s\n", s1, s2);
	printf("%lu %u\n", strlcat(s1, "abcdefghijkl",0),  ft_strlcat(s2, "abcdefghijkl", 0));
	printf("%s %s\n", s1, s2);
	
	printf("%lu %u\n", strlcat(s1, "abc", 10),  ft_strlcat(s2, "abc", 10));
	printf("%s %s\n", s1, s2);
	printf("%lu %u\n", strlcat(s1, "abcdef", 3),  ft_strlcat(s2, "abcdef", 3));
	printf("%s %s\n", s1, s2);
*/	return (0);
}
