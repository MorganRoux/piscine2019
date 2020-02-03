/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:32:56 by mroux             #+#    #+#             */
/*   Updated: 2019/08/17 10:34:55 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*current;

	current = *begin_list;
	new = ft_create_elem(data);
	if (current == 0)
	{
		*begin_list = new;
		return ;
	}
	while (current->next != 0)
		current = current->next;
	current->next = new;
	new->next = 0;
}
