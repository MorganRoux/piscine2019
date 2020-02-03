/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test705.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 10:04:32 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 14:37:24 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	**ft_split(char *str, char *charset);

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
	printf("1===\n");
	
	i = 0;
	strs = ft_split(str, " ");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("2===\n");

	i = 0;
	strs = ft_split(str, ":");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("3===\n");

	i = 0;
	strs = ft_split(str, "");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("4===\n");

	i = 0;
	strs = ft_split("", "-");
	while (strs[i] != 0)
	{
		printf("error");
		i++;
	}
	printf("5===\n");

	i = 0;
	strs = ft_split("", "");
	if (strs[0] != 0)
	{
		printf("error");
		i++;
	}
	printf("6===\n");

	i = 0;
	strs = ft_split("   Salut--mec-!test ok   ! ", " -!");
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("6===\n");

	return (0);
}
