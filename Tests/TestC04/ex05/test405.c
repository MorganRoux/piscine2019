/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test405.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:10:50 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 17:54:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi_base(char *str, char *base);
int 	map_to_value(char c, char *base, int nbase);
int		main(void)
{
	char *s = "--+-- -+0015 20";
	char *s1 = " 	+	-  FE";
	printf("0 : %d\n", ft_atoi_base(s,"0123456789"));
	printf("0 : %d\n", ft_atoi_base(s1,"0123456789ABCDEF"));
	printf("-12332 : %d\n", ft_atoi_base("--+-12332 1","0123456789"));
	
	printf("254 : %d\n", ft_atoi_base("FE","0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base(s,"-+01263 456 - +"));
	printf("%d\n", ft_atoi_base(s,"01263456- +"));
	printf("%d\n", ft_atoi_base(s,"01263 456 - +"));
	printf("%d\n", ft_atoi_base(s,"010"));
	return 0;
}
