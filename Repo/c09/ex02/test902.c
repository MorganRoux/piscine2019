/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test705.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 10:04:32 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 08:53:41 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	**ft_split(char *str, char *charset);

void green() {
	  printf("\033[1;32m");
}
void red() {
	  printf("\033[1;31m");
}
void yellow() {
	  printf("\033[1;33m");
}
void reset () {
	  printf("\033[0m");
}

int		main(void)
{
	char	str[100] = "Salut--mec-!test ok";
	char	*charset = "!-";
	char	**strs;
	int		i;

	i = 0;
	strs = ft_split(str, charset);
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	green();
	printf("-\nSalut\nmec\ntest ok\n");
	reset();
	printf("1===\n");
	
	i = 0;
	strs = ft_split(str, " ");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	green();
	printf("-\nSalut--mec-!test\nok\n");
	reset();
	printf("2===\n");

	i = 0;
	strs = ft_split(str, ":");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	green();
	printf("-\nSalut--mec-!test ok\n");
	reset();
	printf("3===\n");

	i = 0;
	strs = ft_split(str, "");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	green();
	printf("-\nSalut--mec-!test ok\n");
	reset();
	printf("4===\n");

	i = 0;
	strs = ft_split("", "-");
	if (strs[0] != 0)
	{
		printf("error");
		i++;
	}
	else
	{
		green();
		printf("OK!\n");
		reset();
	}
	printf("5===\n");

	i = 0;
	strs = ft_split("", "");
	if (strs[0] != 0)
	{
		printf("error");
		i++;
	}
	else
	{
		green();
		printf("OK!\n");
		reset();
	}
	printf("6===\n");

	i = 0;
	strs = ft_split("   Salut--mec-!test ok   ! ", " -!");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	green();
	printf("-\nSalut\nmec\ntest\nok\n");
	reset();
	printf("6===\n");

	return (0);
}
