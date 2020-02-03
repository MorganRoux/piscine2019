/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1211.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:40:49 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 10:49:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <strings.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

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

	plist = ft_list_find(plist,"item2", &strcmp);
	printf("%s", plist->data);	
}
