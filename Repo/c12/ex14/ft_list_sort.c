/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:59:22 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 16:27:53 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_swap(t_list *lprev, t_list **lcurrent, t_list **lnext)
{
	t_list	*tmp;

	(*lcurrent)->next = (*lnext)->next;
	(*lnext)->next = *lcurrent;
	if (lprev != 0)
		lprev->next = *lnext;
	tmp = *lcurrent;
	*lcurrent = *lnext;
	*lnext = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*lnext;
	t_list	*lcurrent;
	t_list	*lprev;
	int		end;

	end = 0;
	if (*begin_list == 0)
		return ;
	while (!end)
	{
		lprev = 0;
		lcurrent = *begin_list;
		lnext = lcurrent->next;
		end = 1;
		while (lnext != 0)
		{
			if ((*cmp)(lcurrent->data, lnext->data) > 0)
			{
				end = 0;
				*begin_list = ((*begin_list) == lcurrent) ? lnext : *begin_list;
				ft_list_swap(lprev, &lcurrent, &lnext);
			}
			lprev = lcurrent;
			lcurrent = lnext;
			lnext = lcurrent->next;
		}
	}
}
