/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1102.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:37:09 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 12:48:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_any(char **tab, int (*f)(char *));

int		hello(char *str)
{
	return ((strcmp(str, "hello") == 0) ? 1 : 0);
}

int		main(void)
{
	int ret;
	char *str1 = "hey";
	char *str2 = "you";
	char *str3 = "boom";
	char *str4 = "hello";
	char *str5 = "what?";
	char *strs[10];

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	strs[1] = 0;
	ret = ft_any(strs, &hello);

	printf("%d\n", ret); 
	return (0);
}
