/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test209.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:56:31 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 12:03:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char s[80] = "salut, comment tu vas ? 42Motss quaRante-deux; cinquante+et+un  Aa 4A 4a";
	ft_strcapitalize(s);
 	printf("%s",s);

	return (0);
}
