/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-kasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:53:27 by gel-kasr          #+#    #+#             */
/*   Updated: 2019/08/18 18:13:26 by gel-kasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "header.h"
#include "ft.h"

char			*remove_spaces(char *str)
{
	char	**split;
	int		len;

	len = 0;
	split = ft_split(str, " ");
	while (split[len])
		len++;
	return (ft_strjoin(len, split, " "));
}

t_file_desc		file_size(char *file_name)
{
	int			fd;
	char		buf[1];
	int			size;
	int			nb_line;
	t_file_desc	res;

	fd = open(file_name, O_RDONLY);
	size = 0;
	nb_line = 0;
	while (read(fd, buf, 1))
	{
		size++;
		if (buf[0] == '\n')
			nb_line++;
		buf[0] = 0;
	}
	close(fd);
	res.nb_char = size;
	res.nb_line = nb_line;
	return (res);
}

int				fill_dict(char *source, t_item_dict *dest)
{
	char	**sub_split;
	int		len;
	char	*data;

	sub_split = ft_split(source, ":");
	len = 0;
	while (sub_split[len])
		len++;
	data = remove_spaces(sub_split[0]);
	if (ft_str_is_numeric(data))
	{
		dest->key_str = remove_spaces(sub_split[0]);
		dest->data = remove_spaces(
			ft_strjoin(len - 1, (sub_split + 1), ":"));
		if (!dest->key_str || !dest->data)
			return (0);
		dest->value = ft_atoi(dest->key_str);
	}
	else
		return (0);
	return (1);
}

void			free_dict_memory(t_item_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].data)
	{
		free(dict[i].key_str);
		free(dict[i].data);
		i++;
	}
	free(dict);
}

t_item_dict		*parsing(char *dict_name)
{
	char			*buf;
	t_item_dict		*parse;
	char			**split_temp;
	int				i;

	buf = (char *)malloc((file_size(dict_name).nb_char + 1) * sizeof(char));
	parse = malloc((file_size(dict_name).nb_line + 1) * sizeof(t_item_dict));
	if (!buf || !parse)
		return (0);
	i = open(dict_name, O_RDONLY);
	read(i, buf, file_size(dict_name).nb_char);
	close(i);
	split_temp = ft_split(buf, "\n");
	i = -1;
	while (split_temp[++i])
		if (!fill_dict(split_temp[i], &parse[i]))
			return (0);
	parse[i].data = 0;
	free(buf);
	i = 0;
	while (split_temp[i])
		free(split_temp[i++]);
	free(split_temp);
	return (parse);
}
