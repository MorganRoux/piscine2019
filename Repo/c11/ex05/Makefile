NAME		=	do-op
SRCS		=	ft_op.c \
				main1105.c
INC_DIR		=	./
CC			=	gcc
CFLAGS 		=	-Wall -Werror -Wextra
OBJS		=	${SRCS:.c=.o}

.c.o:		${SRCS}
			${CC} ${CFLAGS} -I${INC_DIR} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -L. -lft ${OBJS} -o ${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

