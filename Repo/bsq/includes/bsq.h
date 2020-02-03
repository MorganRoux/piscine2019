/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:09:08 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 22:22:47 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# define NODEBUG
# define BUF_LENGTH 4096

typedef	enum
{
	MAP_EMPTY,
	MAP_OBS,
	MAP_FULL
}	t_map;

typedef	int			t_sqr;

typedef	enum
{
	OK,
	FILE_ERROR,
	MAP_ERROR,
	ALLOC_ERROR,
	COMPUTE_ERROR,
	NEW_LINE,
	NO_SOLUTION
}	t_error;

typedef struct		s_buf
{
	char			data;
	struct s_buf	*next;
}					t_buf;

typedef struct		s_map_info
{
	int				fd;
	char			*filename;
	int				x_max;
	int				y_max;
	int				max[2];
	char			empty;
	char			obs;
	char			full;
	int				new_line;
}					t_map_info;

t_error				read_info(t_map_info *info);
t_error				compute_solution(t_map_info *info, t_sqr **tab);
void				print_tab(t_sqr *tab, t_map_info *info);
void				print_buf(int *i, char *buf);
void				print_error(t_error err);
int					get_x(int pos, t_map_info *info);
int					get_y(int pos, t_map_info *info);
int					get_pos(int x, int y, t_map_info *info);
t_sqr				tab_left(t_sqr *sqr, int pos, t_map_info *info);
t_sqr				tab_up(t_sqr *sqr, int pos, t_map_info *info);
t_sqr				tab_diag(t_sqr *sqr, int pos, t_map_info *info);
t_sqr				min(t_sqr left, t_sqr up, t_sqr diag);
t_map				*generate_random_map(int x, int y, int density);
t_error				go_to_map(t_map_info *info);
void				print_result(t_map_info *info, t_sqr *tab);
t_error				read_first_line(t_map_info *info, t_buf **start);
t_error				fill_first_line(t_sqr **tab, t_buf *line1, int *pos,
									t_map_info *info);
t_error				check_valid(char buf, t_map_info *info, int pos);
t_error				fill_tab(t_sqr *tab, char buf, t_map_info *info, int pos);

#endif
