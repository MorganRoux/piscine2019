/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1217.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:59:10 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 09:49:43 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <strings.h>

void    ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

int		main(void)
{
	t_list	*list[6];
	t_list	*plist;
	char	str[6][10] = {"item03", "item06", "item09", "item13", "item24", "item35"};
	
	t_list	*list2[6];
	char	str2[6][10] = {"item", "item01", "item02", "item16", "item34", "item36"};	

	int i;
	
	i = -1;	
	while (++i < 6)
		list[i] = ft_create_elem(str[i]);
	i = -1;
	while (++i < 5)
		list[i]->next = list[i+1];
	list[5]->next = 0;

	i = -1;	
	while (++i < 6)
		list2[i] = ft_create_elem(str2[i]);
	i = -1;
	while (++i < 5)
		list2[i]->next = list2[i+1];
	list2[5]->next = 0;
	
	plist = list[0];
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
	printf("---\n");
getchar();
	plist = list[0];
	ft_sorted_list_merge(&plist, list2[0], &strcmp);
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
