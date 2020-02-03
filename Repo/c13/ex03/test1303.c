/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1303.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:54:25 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 14:32:22 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void test(void *data)
{
	static int i = 0;

	char *c = data;
	(*c)  = *c + i;
	i++;
}

void print_btree(void *data)
{
	char *c;

	c = (char *)data;
	write(1, c, 1);
	write(1,"\n", 1);
}

int main()
{
	t_btree	*p_btree;
	int size = 7;
	int i;
	char *c;

	i = 0;
	p_btree = malloc(sizeof(t_btree) * size);
	while (i < size)
	{
		c =  (char *)malloc(1);
		*c = '0' + i;
		p_btree[i].item = (void *)c;
		i++;
	}

	p_btree[0].left = &p_btree[1];
	p_btree[0].right = &p_btree[5];
	p_btree[1].left = &p_btree[2];
	p_btree[1].right = &p_btree[3];
	p_btree[2].left = 0;
	p_btree[2].right = 0;
	p_btree[3].left = &p_btree[4];
	p_btree[3].right = 0;
	p_btree[4].left = 0;
	p_btree[4].right = 0;
	p_btree[5].left = 0;
	p_btree[5].right = &p_btree[6];
	p_btree[6].left = 0;
	p_btree[6].right = 0;

//	btree_apply_suffix(p_btree, &test);
	btree_apply_suffix(p_btree, &print_btree);
	return (0);
}
