NAME		= 	libft.a
SRCS		= 	./srcs/ft_putchar.c \
				./srcs/ft_putstr.c \
				./srcs/ft_strlen.c \
				./srcs/ft_swap.c \
				./srcs/ft_strcmp.c
INC_DIR		= 	./includes/
CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror
OBJS		= 	${SRCS:.c=.o}

.c.o:		${SRCS} 
			${CC} ${CFLAGS} -c $< -I${INC_DIR} -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS} 

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all	

.PHONY:		all clean fclean re
