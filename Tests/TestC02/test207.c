/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test207.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:57:18 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:57:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strupcase(char *str);

int		main(void)
{
	char s[30] = "TestTestTest---A::Z";
	ft_strupcase(s);
 	printf("TestTestTest---A::Z\n%s",s);

	return (0);
}
