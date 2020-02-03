/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1214.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:59:31 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 16:26:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <strings.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)());
int		main(void)
{
	t_list	*list[6];
	t_list	*plist;
	char	str[6][10] = {"item3", "item3", "item2", "item4", "item0", "item5"};
	list[0] = ft_create_elem(str[0]);
	list[1] = ft_create_elem(str[1]);
	list[2] = ft_create_elem(str[2]);
	list[3] = ft_create_elem(str[3]);
	list[4] = ft_create_elem(str[4]);
	list[5] = ft_create_elem(str[5]);
	list[0]->next = list[1];
	list[1]->next = list[2];
	list[2]->next = list[3];
	list[3]->next = list[4];
	list[4]->next = list[5];
	list[5]->next = 0;
	plist = list[0];

	ft_list_sort(&plist, &strcmp);
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
