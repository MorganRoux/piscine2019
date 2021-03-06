/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:06:55 by mroux             #+#    #+#             */
/*   Updated: 2019/08/16 09:16:42 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next;
	t_list	*current;

	if (begin_list == 0)
		return ;
	current = begin_list;
	while (current != 0)
	{
		next = current->next;
		(*free_fct)(current->data);
		free(current);
		current = next;
	}
}
