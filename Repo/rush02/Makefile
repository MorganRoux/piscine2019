#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gel-kasr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 09:18:43 by gel-kasr          #+#    #+#              #
#    Updated: 2019/08/18 17:40:20 by gel-kasr         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		rush-02
SRCS =		./srcs/print_nbr2.c ./srcs/main.c ./srcs/parse.c ./srcs/find.c 
OBJS =		${SRCS:.c=.o}
HEADERS =	./includes/
LIB =		libft.a

CC =		gcc
CCFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CCFLAGS) $(OBJS) $(LIB) -o $(NAME)

.c.o:
			$(CC) $(CCFLAGS) -c -I $(HEADERS) $< -o $(<:.c=.o)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

test:		re
			./test_rush02.sh

norm:
			norminette $(SRCS) $(HEADERS)*.h