/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:36:18 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 11:11:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*plist;

	i = 0;
	plist = begin_list;
	while (plist != 0)
	{
		if (i == nbr)
			return (plist);
		i++;
		plist = plist->next;
	}
	return (0);
}

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != 0)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		i;
	void	*tmp;

	if (begin_list == 0)
		return ;
	size = ft_list_size(begin_list);
	i = 0;
	while (i < size / 2)
	{
		tmp = ft_list_at(begin_list, i)->data;
		ft_list_at(begin_list, i)->data =
			ft_list_at(begin_list, size - i - 1)->data;
		ft_list_at(begin_list, size - i - 1)->data = tmp;
		i++;
	}
}
