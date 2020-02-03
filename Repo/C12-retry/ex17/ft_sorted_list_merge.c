/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:57:33 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 14:01:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	insert_item(t_list *lnew, t_list *lcurrent1,
				t_list *lprev1, t_list **begin_list1)
{
	lnew->next = lcurrent1;
	if (lprev1 == 0)
		*begin_list1 = lnew;
	else
		lprev1->next = lnew;
}

int		init(t_list **lcurrent1, t_list **lprev1,
		t_list **begin_list1, t_list *begin_list2)
{
	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return (0);
	}
	if (begin_list2 == 0)
		return (0);
	*lcurrent1 = *begin_list1;
	*lprev1 = 0;
	return (1);
}

void	end(t_list *lcurrent1, t_list *lnew, t_list **lprev1)
{
	if (lcurrent1 == 0)
	{
		(*lprev1)->next = lnew;
		lnew->next = 0;
	}
	*lprev1 = lnew;
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list	*lnew;
	t_list	*lcurrent1;
	t_list	*lprev1;
	t_list	*lcurrent2;

	if (!init(&lcurrent1, &lprev1, begin_list1, begin_list2))
		return ;
	lcurrent2 = begin_list2;
	while (lcurrent2 != 0)
	{
		lnew = lcurrent2;
		lcurrent2 = lcurrent2->next;
		while (lcurrent1 != 0)
		{
			if ((*cmp)(lcurrent1->data, lnew->data) >= 0)
			{
				insert_item(lnew, lcurrent1, lprev1, begin_list1);
				break ;
			}
			lprev1 = lcurrent1;
			lcurrent1 = lcurrent1->next;
		}
		end(lcurrent1, lnew, &lprev1);
	}
	return ;
}
