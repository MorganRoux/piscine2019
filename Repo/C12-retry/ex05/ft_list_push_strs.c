/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:27:19 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 10:40:45 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*new;
	int		i;

	i = 1;
	if (size == 0)
		return (0);
	begin_list = ft_create_elem(strs[size - 1]);
	new = begin_list;
	while (i < size)
	{
		new->next = ft_create_elem(strs[size - i - 1]);
		new = new->next;
		i++;
	}
	return (begin_list);
}
