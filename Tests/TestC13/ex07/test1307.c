/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1301.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:26:06 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 22:40:58 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *, int current_level,
			int is_first));
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void test(void *data)
{
	static int i = 0;

	char *c = data;
	(*c)  = *c + i;
	i++;
}

void print_btree(void *data, int current_level, int is_first)
{
	char *c;
	char i;

	(void)current_level;
	(void)is_first;
	i = current_level + '0';
	c = (char *)data;
	write(1, c, 1);
	write(1, " - ", 3);
	write(1, &i, 1);
	i = is_first + '0';
	write(1, " - ", 3);
	write(1, &i, 1);
	write(1," !\n", 3);
}

int main()
{
	t_btree	*p_btree;
	int size = 13;
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
	p_btree[0].right = &p_btree[2];
	p_btree[1].left = &p_btree[3];
	p_btree[1].right = &p_btree[4];
	p_btree[2].left = &p_btree[4];
	p_btree[2].right = &p_btree[5];
	p_btree[3].left = 0;
	p_btree[3].right = &p_btree[6];
	p_btree[4].left = 0;
	p_btree[4].right = &p_btree[7];
	p_btree[5].left = 0;
	p_btree[5].right = &p_btree[8];
	p_btree[6].left = &p_btree[9];
	p_btree[6].right = &p_btree[10];
	p_btree[7].left = 0;
	p_btree[7].right = 0;
	p_btree[8].left = &p_btree[11];
	p_btree[8].right = 0;
	p_btree[9].left = 0;
	p_btree[9].right = 0;
	p_btree[10].left = 0;
	p_btree[10].right = &p_btree[12];
	p_btree[11].left = 0;
	p_btree[11].right = 0;
	p_btree[12].left = 0;
	p_btree[12].right = 0;

//	btree_apply_prefix(p_btree, &print_btree);
	btree_apply_by_level(p_btree, &print_btree);
	return (0);
}
