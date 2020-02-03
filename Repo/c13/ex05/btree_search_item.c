/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:50:30 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 10:28:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *item;

	if (root == 0)
		return (0);
	if ((*cmpf)(root->item, data_ref) == 0)
		return (root);
	if ((item = btree_search_item(root->left, data_ref, cmpf)) == 0)
		item = btree_search_item(root->right, data_ref, cmpf);
	return (item);
}
