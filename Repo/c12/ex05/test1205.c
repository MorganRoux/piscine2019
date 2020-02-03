/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1201.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:26:00 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 20:41:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"


t_list *ft_list_push_strs(int size, char **strs);

int		main(void)
{
	t_list	*plist;
	char	*str0;
	char	*str1;
	char	*str2;
	char	*strs[3];
	
	str0 = "item0";
	str1 = "item1";
	str2 = "item2";
	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;

	plist = ft_list_push_strs(3, strs);
	while(plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}

}
