/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:45:40 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 08:55:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	insert_item(t_list *lnew, t_list *lcurrent,
				t_list *lprev, t_list **begin_list)
{
	lnew->next = lcurrent;
	if (lprev == 0)
		*begin_list = lnew;
	else
		lprev->next = lnew;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*lnew;
	t_list	*lcurrent;
	t_list	*lprev;

	lnew = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = lnew;
		return ;
	}
	lcurrent = *begin_list;
	lprev = 0;
	while (lcurrent != 0)
	{
		if ((*cmp)(lcurrent->data, lnew->data) >= 0)
		{
			insert_item(lnew, lcurrent, lprev, begin_list);
			return ;
		}
		lprev = lcurrent;
		lcurrent = lcurrent->next;
	}
	lprev->next = lnew;
	lnew->next = 0;
	return ;
}
