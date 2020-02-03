/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:55:34 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 21:51:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char	**alloc_memory(int n_words, char *str)
{
	int n = 0;
	int i = 0;
	char **strs;

	if (!(strs = (char **)malloc(sizeof(char*) * n_words + 1)))
		return (0);
	strs[n_words] = 0;
	while (n < n_words)
	{
		i = 0;
		while (*str != 0 && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		while (1)
		{
			if (str[i] == 0 || str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			{
				if (!(strs[n] = (char*)malloc(sizeof(char) * (i + 1))))
					return (0);
				n++;
				str += i;
				break;
			}
			else
				i++;
		}
	}
	return (strs);
}

void	fill(int n_words, char *str, char **strs)
{
	int n = 0;
	int i = 0;

	while (n < n_words)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{	
			str++;
			if (str == 0)
				return ;
		}
	//	while (*str != 0 && (*str == ' ' || *str == '\n' || *str == '\t'))
	//		str++;
		while (str[i] != 0)
		{
			if (!(str[i] == 0  || str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			{
				(*strs)[i] = str[i];
				i++;
			}
			else
			{	
				(*strs)[i] = 0;
				strs++;
				n++;
				str += i;
				break;
			}
		}
		if (str[i] == 0)
			break;
	}
	return ;

}
int compute_n_words(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] !=0)
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{	
			i++;
			if (str[i] == 0)
				return (n);
		}
		while (str[i++] != 0)
		{
			if(!(str[i] != 0 && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')))
			{
				n++;
				break;
			}
		}
	}
	return (n);
}

char	**ft_split(char *str)
{
	char **strs;
	int n_words;

	if (str == 0)
		return(0);
	n_words = compute_n_words(str);
	strs = alloc_memory(n_words,str);
	if(strs != 0)
		fill(n_words, str, strs);
	return (strs);

}

