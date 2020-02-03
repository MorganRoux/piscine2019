/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:40:59 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 10:49:24 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*plist;

	plist = begin_list;
	while (plist != 0)
	{
		if ((*cmp)(plist->data, data_ref) == 0)
			return (plist);
		plist = plist->next;
	}
	return (0);
}
