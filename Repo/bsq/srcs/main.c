/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:55:11 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 23:36:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft.h"

void	init(t_map_info *info, char *filename)
{
	info->fd = 0;
	info->filename = filename;
	info->x_max = 0;
	info->y_max = 0;
	info->max[0] = 0;
	info->max[1] = 0;
	info->new_line = 0;
}

void	print_stdin(void)
{
	t_error		error;
	t_map_info	info;
	t_sqr		*tab;

	init(&info, 0);
	if ((error = read_info(&info)) == OK)
		error = compute_solution(&info, &tab);
	if (error == OK || error == NO_SOLUTION)
		print_result(&info, tab);
	else
		print_error(error);
}

void	print_files(int argc, char *argv[])
{
	t_map_info	info;
	t_error		error;
	t_sqr		*tab;
	int			i;

	i = 1;
	tab = 0;
	while (i < argc)
	{
		if (i > 1)
			write(1, "\n", 1);
		init(&info, argv[i]);
		if ((error = read_info(&info)) == OK)
			error = compute_solution(&info, &tab);
		if (error == OK || error == NO_SOLUTION)
			print_result(&info, tab);
		else
			print_error(error);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		print_stdin();
	else
		print_files(argc, argv);
	return (0);
}
