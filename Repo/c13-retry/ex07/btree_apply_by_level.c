/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:45:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 22:41:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void			fill(t_queue_item *new_queue, t_queue_item *queue,
					t_btree *p_btree, int *i)
{
	if (p_btree != 0)
	{
		new_queue[*i].p_btree = p_btree;
		new_queue[*i].current_level = queue->current_level + 1;
		*i = (*i) + 1;
	}
}

t_queue_item	*push(t_queue_item *queue,
					t_btree *p_btree_l,
					t_btree *p_btree_r)
{
	int				i;
	t_queue_item	*new_queue;
	int				push;
	int				len;

	push = ((p_btree_l == 0) ? 0 : 1) + ((p_btree_r == 0) ? 0 : 1);
	i = 0;
	len = 0;
	while (queue[len].p_btree != 0)
		len++;
	if (!(new_queue = (t_queue_item *)malloc(
					sizeof(t_queue_item) * (len + 1 + push))))
		return (0);
	while (i + 1 < len)
	{
		new_queue[i] = queue[i + 1];
		i++;
	}
	fill(new_queue, queue, p_btree_l, &i);
	fill(new_queue, queue, p_btree_r, &i);
	new_queue[i].p_btree = 0;
	free(queue);
	return (new_queue);
}

void			apply_by_level(t_queue_item *queue,
				void (*applyf)(void *item, int current_level,
					int is_first), int prev_level)
{
	t_btree	*p_btree;
	int		is_first;
	int		level;

	is_first = 0;
	level = prev_level;
	if (queue->current_level > prev_level)
	{
		is_first = 1;
		level = queue->current_level;
	}
	p_btree = queue->p_btree;
	if (p_btree == 0)
		return ;
	(*applyf)(p_btree->item, queue->current_level, is_first);
	queue = push(queue, p_btree->left, p_btree->right);
	apply_by_level(queue, applyf, level);
}

void			btree_apply_by_level(t_btree *root,
					void (*applyf)(void *item, int current_level,
					int is_first))
{
	t_queue_item *queue;

	queue = (t_queue_item *)malloc(sizeof(t_queue_item) * (2));
	queue[0].p_btree = root;
	queue[0].current_level = 0;
	queue[1].p_btree = 0;
	apply_by_level(queue, applyf, -1);
}
