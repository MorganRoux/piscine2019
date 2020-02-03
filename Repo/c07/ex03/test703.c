/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test703.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:27:19 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 19:57:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char	*strs[10];
    char	*str1 = "test1";
	char 	*str2 = "test2";
	char	*str3 = "test3";
	char 	*str4 = "";
	char 	*str5 = "test5";

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;

	printf("%s\n", ft_strjoin(3, strs, "-"));
	if (strcmp(ft_strjoin(3, strs, "-"), "test1-test2-test3") == 0)
		printf("ok\n");
	else
		printf("error\n");

	printf("%s\n", ft_strjoin(0, strs, "-"));
	if (strcmp(ft_strjoin(0, strs, "-"), "") == 0)
		printf("ok\n");
	else
		printf("error\n");

	printf("%s\n", ft_strjoin(2, strs, "-!-"));
	if (strcmp(ft_strjoin(2, strs, "-!-"), "test1-!-test2") == 0)
		printf("ok\n");
	else
		printf("error\n");

	printf("%s\n", ft_strjoin(1, strs, "-!-"));
	if (strcmp(ft_strjoin(1, strs, "-"), "test1") == 0)
		printf("ok\n");
	else
		printf("error\n");
	
	printf("%s\n", ft_strjoin(5, strs, "	"));
	if (strcmp(ft_strjoin(5, strs, "	"), "test1	test2	test3		test5") == 0)
		printf("ok\n");
	else
		printf("error\n");



	return (0);
}
