/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test304.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:45:02 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 20:27:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *s1, char *s2);

int		main(void)
{
	printf("%s %s\n", strstr("abcdeghijklmnopq","klm"), ft_strstr("abcdeghijklmnopq","klm"));
	printf("%s %s\n", strstr("abcdeghijklmnopq","abc"), ft_strstr("abcdeghijklmnopq","abc"));
	printf("%s %s\n", strstr("ab0cdeghij0klmnopq","klm"), ft_strstr("ab0cdeghij0klmnopq","klm"));
	printf("%s %s\n", strstr("abcdef",""), strstr("abcdef", ""));
	printf("%s %s\n", strstr("abcdeghijklmnopq", "lmk"), ft_strstr("abcdeghijklmnopq","lmk"));
	printf("%s %s\n", strstr("abcdeghijklmnopq", "opq"), ft_strstr("abcdeghijklmnopq","opq"));
	printf("%s %s\n", strstr("abcdeghijklmnopq", "pq\0"), ft_strstr("abcdeghijklmnopq","pq\0"));

	printf("%s %s\n", strstr("0000aaiab000q", "aab"), ft_strstr("0000aaiab000q","aab"));
	printf("%s %s\n", strstr("0000aaab000q", "aab"), ft_strstr("0000aaab000q","aab"));
	return (0);
}
