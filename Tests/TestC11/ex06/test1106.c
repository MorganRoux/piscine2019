/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1106.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:28:41 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 16:47:12 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int		main(int argc, char *argv[])
{
	(void)argc;
	if (argc == 1)
		return (0);
	ft_sort_string_tab(++argv);
	while(*argv != 0)
		printf("%s\n", *argv++);
}
