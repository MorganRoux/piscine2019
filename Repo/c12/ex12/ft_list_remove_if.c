/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:08:14 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 12:00:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>


void	free_item(t_list *item, void (*free_fct)(void *))
{
	(*free_fct)(item->data);
	free(item);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*to_rm;
	t_list	*lprev;
	t_list	*lcurrent;

	if ((lcurrent = *begin_list) == 0)
		return ;
	lprev = 0;
	while (lcurrent != 0)
	{
		if ((*cmp)(lcurrent->data, data_ref) == 0)
		{
			to_rm = lcurrent;
			lcurrent = lcurrent->next;
			free_item(to_rm, free_fct);
			if (lprev == 0)
				*begin_list = lcurrent;
			else
				lprev->next = lcurrent;
		}
		else
		{
			lprev = lcurrent;
			lcurrent = lcurrent->next;
		}
	}
}
