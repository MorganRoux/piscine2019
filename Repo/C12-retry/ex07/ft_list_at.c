/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 09:22:53 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 09:30:20 by mroux            ###   ########.fr       */
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
