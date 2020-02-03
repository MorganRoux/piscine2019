/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1103.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:51:28 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 12:55:14 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_count_if(char **tab, int length, int (*f)(char *));

int		hello(char *str)
{
	return ((strcmp(str, "hello") == 0) ? 1 : 0);
}

int		main(void)
{
	int ret;
	char *str1 = "hey";
	char *str2 = "hellois";
	char *str3 = "boom";
	char *str4 = "hellos";
	char *str5 = "what?";
	char *strs[10];

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	ret = ft_count_if(strs, 5, &hello);

	printf("%d\n", ret); 
	return (0);
}
