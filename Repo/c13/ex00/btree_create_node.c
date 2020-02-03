/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:39:02 by mroux             #+#    #+#             */
/*   Updated: 2019/08/18 20:40:50 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *p_btree;

	if (!(p_btree = (t_btree *)malloc(sizeof(t_btree) * 1)))
		return (0);
	p_btree->left = 0;
	p_btree->right = 0;
	p_btree->item = item;
	return (p_btree);
}
