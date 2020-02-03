/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1209.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:22:15 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 10:25:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	fct(void *data)
{
	char	*str = data;
	str[0] = 'h';
}

int		main(void)
{
	t_list	*list[3];
	t_list	*plist;
	char	str[3][10] = {"item0", "item1", "item2"};
	list[0] = ft_create_elem(str[0]);
	list[1] = ft_create_elem(str[1]);
	list[2] = ft_create_elem(str[2]);
	list[0]->next = list[1];
	list[1]->next = list[2];
	list[2]->next = 0;
	plist = list[0];

	while(plist!= 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
	plist = list[0];
	ft_list_foreach(plist,&fct);
	while(plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
