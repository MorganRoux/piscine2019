/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:16:01 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 10:27:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		count_level(t_btree *root, int level)
{
	int level_left;
	int level_right;

	if (root == 0)
		return (level - 1);
	level_left = count_level(root->left, level + 1);
	level_right = count_level(root->right, level + 1);
	return ((level_left > level_right) ? level_left : level_right);
}

int		btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (count_level(root, 1));
}
