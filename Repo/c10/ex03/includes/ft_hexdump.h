/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:15:43 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 12:15:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H
# include "ft.h"

void	ft_puterr(char *str);
void	ft_putfileerr(char *filename);
void	ft_hexdump(char *filename);
void	print_from_stdin();

#endif
