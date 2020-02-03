/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1105.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:34:38 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 15:15:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		main(int argc, char *argv[])
{
	void (*op)(int, int);

	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		op = &add;
	else if (ft_strcmp(argv[2], "-") == 0)
		op = &sub;
	else if (ft_strcmp(argv[2], "*") == 0)
		op = &prod;
	else if (ft_strcmp(argv[2], "/") == 0)
		op = &div;
	else if (ft_strcmp(argv[2], "%") == 0)
		op = &mod;
	else
	{
		write(1, "0\n", 2);
		return (0);
	}

	(*op)(ft_atoi(argv[1]), ft_atoi(argv[3]));

	return (0);
}
