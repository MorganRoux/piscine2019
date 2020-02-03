#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <strings.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

void	fct(void *data)
{
	char	*str = data;
	str[0] = 'h';
}

int		main(void)
{
	t_list	*list[6];
	t_list	*plist;
	char	str[6][10] = {"item", "item1", "item2", "item3", "item4", "item5"};
	list[0] = ft_create_elem(str[0]);
	list[1] = ft_create_elem(str[1]);
	list[2] = ft_create_elem(str[2]);
	list[3] = ft_create_elem(str[3]);
	list[4] = ft_create_elem(str[4]);
	list[5] = ft_create_elem(str[5]);
	list[0]->next = list[1];
	list[1]->next = list[2];
	list[2]->next = list[3];
	list[3]->next = list[4];
	list[4]->next = list[5];
	list[5]->next = 0;
	plist = list[0];

	ft_list_remove_if(&plist, "item5", &strcmp, &fct);
	while (plist != 0)
	{
		printf("%s\n", plist->data);
		plist = plist->next;
	}
}
