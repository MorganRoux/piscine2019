NAME		=	bsq

SRCS		=	./srcs/main.c \
				./srcs/compute.c \
				./srcs/compute2.c \
				./srcs/file.c \
				./srcs/utilities.c \
				./srcs/utilities2.c \
				./srcs/generator.c \
				./srcs/checkmap.c \
				./srcs/print.c

OBJS		=	${SRCS:.c=.o}

INC			=	./includes

CC	 		= 	gcc

FLAGS		=	-Wall -Werror -Wextra

.c.o:
				${CC} ${FLAGS} -c $< -I${INC} -o ${<:.c=.o}

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${FLAGS} ${OBJS} -L. -lft -o ${NAME}

clean:			
				rm -f srcs/*.o
				rm -f tests/*.o

fclean:			clean
				rm -f ${NAME}
				rm -f ${T_NAME}

re:				fclean all

.PHONY:			all clean fclean re
