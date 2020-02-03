/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1104.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:00:13 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 14:20:27 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int		down_to_up(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int	tab[] = {2,2,1,1,3};
	printf("%d",ft_is_sort(tab, 5, &down_to_up));
	return (0);
}
