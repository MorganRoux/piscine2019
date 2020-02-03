/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:34:22 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 10:39:18 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*plist;

	plist = begin_list;
	while (plist != 0)
	{
		if ((*cmp)(plist->data, data_ref) == 0)
			(*f)(plist->data);
		plist = plist->next;
	}
	return ;
}
