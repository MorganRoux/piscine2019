/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:26:23 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 10:02:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*alloc_memory(int size, char **strs, int sep_len)
{
	int		total_size;
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		while (*(strs[i] + j++) != 0)
			total_size++;
		total_size += sep_len;
		i++;
	}
	total_size = total_size - sep_len + 1;
	if (!(ret = (char *)malloc(sizeof(char) * total_size)))
		return (0);
	return (ret);
}

void	fill_str(int size, char **strs, char *sep, char *ret)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ret;
	i = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (*(strs[i] + j) != 0)
			*str++ = *(strs[i] + j++);
		if (++i == size)
			break ;
		while (sep[k] != 0)
			*str++ = sep[k++];
	}
	*str = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		sep_len;

	i = 0;
	sep_len = 0;
	if (size == 0)
	{
		ret = malloc(1);
		ret[0] = 0;
		return (ret);
	}
	while (sep[sep_len] != 0)
		sep_len++;
	if (!(ret = alloc_memory(size, strs, sep_len)))
		return (0);
	fill_str(size, strs, sep, ret);
	return (ret);
}
