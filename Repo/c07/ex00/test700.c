/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test700.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:32:53 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 19:35:56 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

char	*ft_strdup(char *src);

void green() {
	  printf("\033[1;32m");
}
void red() {
	  printf("\033[1;31m");
}
void yellow() {
	  printf("\033[1;33m");
}
void reset () {
	  printf("\033[0m");
}

int		main(void)
{
	char src[20];
	char *src_null = 0;
	char *dest;
	char *dest2;
	int i;
   
	i = 0;
	while (i < 10)
	{
		strcpy(src, "123456789abcdef");
		src[i] = '\0';
		dest = ft_strdup(src);
		dest2 = strdup(src);
		if (strcmp(dest2, dest) != 0)
		{
			red();
			printf("error : %s - %s\n", src, dest);
			reset();
			return (0);
		}
		printf("ok : %s - %s\n", src, dest);
		i++;
	}	
	if((dest = ft_strdup(src_null)) != NULL)
	{
		printf("error : %s - %s", src, dest);
		return (0);
	}

	printf("ok : NULL - NULL\n");
	green();
	printf("=== SUCCES ===");
	reset();
	return (0);
}
