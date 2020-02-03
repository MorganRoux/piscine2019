/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1107.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:58:06 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 16:05:59 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	if (argc == 1)
		return (0);
	ft_advanced_sort_string_tab(++argv, &ft_strcmp);
	while(*argv != 0)
		printf("%s\n", *argv++);
}
