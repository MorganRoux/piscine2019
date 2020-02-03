/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test300.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:15:05 by mroux             #+#    #+#             */
/*   Updated: 2019/08/05 12:03:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[20] = "Hello world";
	s1[5] = -1;

	printf("%d %d\n", strcmp("abcde", "abcjg"), ft_strcmp("abcde", "abcjg"));
	printf("%d %d\n", strcmp("abcde", "abcda"), ft_strcmp("abcde", "abcda"));
	printf("%d %d\n", strcmp("abcde", "abcde"), ft_strcmp("abcde", "abcde"));
	printf("%d %d\n", strcmp("abcdegh", s1), ft_strcmp("abcdegh", s1));
	printf("%d %d\n", strcmp(s1, "abcdegh"), ft_strcmp(s1, "abcdegh"));
	printf("%d %d\n", strcmp("abcd", "abcdef"), ft_strcmp("abcd", "abcdef"));
	printf("%d %d\n", strcmp("abcde", "abc"), ft_strcmp("abcde", "abc"));
	
	
	
	return (0);
}
