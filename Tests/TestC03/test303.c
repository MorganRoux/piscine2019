/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test303.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:10:49 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 20:18:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *s1, char *s2, unsigned int nb);

int		main(void)
{
	char s1[20] = "1234";	
	char s2[20] = "1234";
	printf("%s %s\n", strncat(s1, "abcdef", 10), ft_strncat(s2, "abcdef", 10));
	printf("%s %s\n", strncat(s1, "abcdef", 2), ft_strncat(s2, "abcdef", 2));
	return (0);
}
