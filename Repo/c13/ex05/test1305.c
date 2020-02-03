/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1305.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:43 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 10:12:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

void test(void *data)
{
	static int i = 0;

	char *c = data;
	(*c)  = *c + i;
	i++;
}

void print_btree(void *data)
{
	int *n;

	n = (int *)data;
	printf("%d\n", *n);
}

int	intcmp(void *data1, void *data2)
{
	int *i1 = (int *)data1;
	int *i2 = (int *)data2;

	return (*i1 - *i2);
}

int main()
{
	t_btree	*p_btree;
	t_btree *ret;
	int size = 7;
	int i;
	int *n;
	int search;

	i = 0;
	p_btree = malloc(sizeof(t_btree) * size);
	while (i < size)
	{
		n = (int *)malloc(sizeof(int) * 1);
		p_btree[i].item = (void *)n;
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
	*(int *)p_btree[0].item = 40;
	*(int *)p_btree[1].item = 20;
	*(int *)p_btree[2].item = 10;
	*(int *)p_btree[3].item = 30;
	*(int *)p_btree[4].item = 25;
	*(int *)p_btree[5].item = 50;
	*(int *)p_btree[6].item = 60;

	//p_btree = 0;
	btree_apply_infix(p_btree, &print_btree);
	printf("--\n");
	search = 25;
	ret = (t_btree *)btree_search_item(p_btree, &search, &intcmp);
	n = (int *)ret->item;
	printf("%d", *n);
	return (0);
}
