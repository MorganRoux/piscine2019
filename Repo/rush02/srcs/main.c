/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-kasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 01:35:40 by gel-kasr          #+#    #+#             */
/*   Updated: 2019/08/18 18:44:12 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		raise_error(char *str)
{
	ft_putstr(str);
	return (0);
}

char	*clear_zero(char *str, t_item_dict *dict)
{
	if (*str == 0)
		return (0);
	while (*str != 0)
	{
		if (*str != '0')
			return (str);
		str++;
	}
	find_print_str("0", dict);
	ft_putchar('\n');
	return (0);
}

int		check_input(char *nbr)
{
	if (!ft_str_is_numeric(nbr))
		return (0);
	return (1);
}

char	*read_from_stdin(void)
{
	char	*buf;
	int		i;
	int		r;

	i = 0;
	if (!(buf = (char *)malloc(sizeof(char) * 201)))
		return (0);
	if ((r = read(0, buf, 200)) == -1)
		return (0);
	buf[r - 1] = 0;
	return (buf);
}

int		main(int argc, char **argv)
{
	t_item_dict	*dict;
	char		*dict_name;
	char		*nbr;

	if (argc <= 1)
		nbr = read_from_stdin();
	else
		nbr = ((argc == 2) ? argv[1] : argv[2]);
	dict_name = ((argc <= 2) ? "numbers.dict" : argv[1]);
	if (!check_input(nbr))
		return (raise_error(ARG_ERROR));
	if (!(dict = parsing(dict_name)))
		return (raise_error(DICT_ERROR));
	if ((nbr = clear_zero(nbr, dict)) == 0)
		return (1);
	if (print_nbr(nbr, dict) == 0)
		raise_error(CONV_ERROR);
	else
		ft_putchar('\n');
	free_dict_memory(dict);
	if (argc <= 1)
		free(nbr);
	return (1);
}
