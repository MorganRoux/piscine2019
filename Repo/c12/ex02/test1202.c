/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1201.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:26:00 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 19:06:26 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);

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

	printf("%d", ft_list_size(plist));
}
