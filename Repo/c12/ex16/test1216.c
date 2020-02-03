/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1216.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:46:07 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 08:56:06 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <strings.h>

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
int		main(void)
{
	t_list	*list[6];
	t_list	*plist;
	char	str[6][10] = {"item0", "item2", "item3", "item4", "item5", "item5"};
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

	ft_sorted_list_insert(&plist, "item32", &strcmp);
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
