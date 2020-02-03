/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test301.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:25:34 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 16:42:15 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[20] = "Hello world";
	s1[5] = 0xFF;

	printf("%d %d\n", strncmp("abcdef", "abcjgf", 5), ft_strncmp("abcdef", "abcjgf", 5));
	printf("%d %d\n", strncmp("abcdef", "abcdaf", 5), ft_strncmp("abcdef", "abcdaf", 5));
	printf("%d %d\n", strncmp("abcdef", "abcdef", 5), ft_strncmp("abcdef", "abcdef", 5));
	printf("%d %d\n", strncmp("abcdegh", s1, 7), ft_strncmp("abcdegh", s1, 7));
	printf("%d %d\n", strncmp("abcdeg", "abcdef", 3), ft_strncmp("abcdeg", "abcdef", 3));
	printf("%d %d\n", strncmp(s1, "abcdegh", 7), ft_strncmp(s1, "abcdegh", 7));
	printf("%d %d\n", strncmp("abcd", "abcdef", 7), ft_strncmp("abcd", "abcdef", 7));
	printf("%d %d\n", strncmp("abcde", "abc", 7), ft_strncmp("abcde", "abc", 7));
	
	
	
	return (0);
}
