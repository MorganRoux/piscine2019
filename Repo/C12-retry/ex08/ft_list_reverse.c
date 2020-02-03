/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 09:33:58 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 09:59:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*lnext;
	t_list	*lprev;
	t_list	*lcurrent;

	lprev = *begin_list;
	if (lprev == 0)
		return ;
	lcurrent = lprev->next;
	lprev->next = 0;
	while (lcurrent != 0)
	{
		lnext = lcurrent->next;
		lcurrent->next = lprev;
		lprev = lcurrent;
		lcurrent = lnext;
	}
	*begin_list = lprev;
	return ;
}
