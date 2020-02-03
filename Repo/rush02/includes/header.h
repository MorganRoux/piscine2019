/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-kasr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:29:06 by gel-kasr          #+#    #+#             */
/*   Updated: 2019/08/18 18:41:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HEADER_H
# define _HEADER_H
# define CONV_ERROR "Error\n"
# define ARG_ERROR "Error\n"
# define DICT_ERROR "Dict Error\n"

typedef struct			s_item_dict
{
	char				*key_str;
	int					value;
	char				*data;
}						t_item_dict;

typedef long long int	t_ull;

typedef struct			s_file_desc
{
	int					nb_char;
	int					nb_line;
}						t_file_desc;

int						print_nbr(char *str, t_item_dict *dict);
int						find_print(int nb, t_item_dict *dict);
int						find_print_str(char *str, t_item_dict *dict);
int						is_mult(char *str);
t_item_dict				*parsing(char *dict_name);
void					free_dict_memory(t_item_dict *dict);

#endif
