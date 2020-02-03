/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1101.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:24:09 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 12:31:45 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int		add100(int i)
{
	return (i + 100);
}

int		main(void)
{
	int *ret;
	int i;
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};
	
	i = 0;
	ret = ft_map(tab, 10, &add100);

	while (i < 10)
		printf("%d\n", ret[i++]); 
	return (0);
}
