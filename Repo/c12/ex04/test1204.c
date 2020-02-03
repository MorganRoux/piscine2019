/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1204.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:13:47 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 19:33:46 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*list[3];
	t_list	*plist;

	
	list[0] = ft_create_elem("item0");
	list[1] = ft_create_elem("item1");
	list[2] = ft_create_elem("item2");
	list[0]->next = list[1];
	list[1]->next = list[2];
	list[2]->next = 0;
	plist = list[0];

	ft_list_push_back(&plist,"new item");
	while(plist!= 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}

}
