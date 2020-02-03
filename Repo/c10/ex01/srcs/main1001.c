/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1001.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:43:10 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 21:34:04 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <stdio.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
	{
		ft_display_file(0, argv[0]);
		return (0);
	}
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			ft_display_file(0, argv[0]);
		else
			ft_display_file(argv[i], argv[0]);
		i++;
	}
	return (0);
}
