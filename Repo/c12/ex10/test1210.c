/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1211.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:40:49 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 11:01:04 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <strings.h>

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());

void	fct(void *data)
{
	char	*str = data;
	str[0] = 'h';
}

int		main(void)
{
	t_list	*list[3];
	t_list	*plist;
	char	str[3][10] = {"item", "item1", "item2"};
	list[0] = ft_create_elem(str[0]);
	list[1] = ft_create_elem(str[1]);
	list[2] = ft_create_elem(str[2]);
	list[0]->next = list[1];
	list[1]->next = list[2];
	list[2]->next = 0;
	plist = list[0];

	ft_list_foreach_if(plist, &fct, "item1", &strcmp);
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
