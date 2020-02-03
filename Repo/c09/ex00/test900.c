/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t900.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:08:19 by mroux             #+#    #+#             */
/*   Updated: 2019/08/12 11:46:20 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);

int main(void)
{
	char *str = "hello you !";
	char *str2 = "hello z";
	int a = 48;
	int b = 50;
	char c = 'a';

	printf("==putchar==\n");
	ft_putchar(c);
	printf("\n==putstr==\n");
	ft_putstr(str);
	printf("\n==swap==\n");
	printf("%d %d\n",a, b);
	ft_swap(&a, &b);
	printf("%d %d",a, b);
	printf("\n==strlen==\n");
	printf("%d", ft_strlen(str));
	printf("\n==strcmp==\n");
	printf("%d", ft_strcmp(str, str2));

}
