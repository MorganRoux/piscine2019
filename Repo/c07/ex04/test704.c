/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test405.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:10:50 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 14:05:10 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		main(void)
{
	char *s = "--+---+0016 20";
	printf("FF : %s\n", ft_convert_base("255", "0123456789", "0123456789ABCDEF"));
	printf("25695 : %s\n", ft_convert_base("25695", "0123456789", "0123456789"));
	printf("250695 : %s\n", ft_convert_base("0250695", "0123456789", "0123456789"));
	printf("0 : %s\n", ft_convert_base("--+-0 16", "0123456789", "0123456789ABCDEF"));
	printf("NULL : %s\n", ft_convert_base("+	16", "0123456789", "01"));
	printf("1000 : %s\n", ft_convert_base(" 	--+--16", "0123456789", "01"));
	printf("NULL : %s\n", ft_convert_base(" 	--+--16", "0123456789", "1"));
	printf("5 : %s\n", ft_convert_base("--5", "0123456789", "0123456789ABCDEF"));
	printf("0 : %s\n", ft_convert_base("--+-0 16", "0123456789", "0123456789ABCDEF"));
	printf("-10 : %s\n", ft_convert_base("--+-16", "0123456789", "0123456789ABCDEF"));
	printf("NULL ou 0 ?? : %s\n", ft_convert_base("-- +-16", "0123456789", "0123456789ABCDEF"));
	printf("1 : %s\n", ft_convert_base("--+-FFFFFFFFiF", "0123456789ABCDEF", "0123456789abcdef"));
	printf("NULL : %s\n", ft_convert_base("+16", "01230456789", "0123456789ABCDEF"));
	printf("NULL : %s\n", ft_convert_base("- -+-16", "0123456789", "0123456789ABCDEF"));
	printf("NULL : %s\n", ft_convert_base("--+-16", "0123456789", "01230456789ABCDEF"));
	printf("NULL : %s\n", ft_convert_base(s,"01263 456 - +", "iuyr"));
	printf("NULL : %s\n", ft_convert_base(s,"10123456","10"));
	printf("NULL : %s\n", ft_convert_base("123456","1","123456"));
	printf("* : %s\n", ft_convert_base("2g","1234","a*df"));
	printf("NULL : %s\n", ft_convert_base("123456","1234	56","123456"));
	return 0;
}
