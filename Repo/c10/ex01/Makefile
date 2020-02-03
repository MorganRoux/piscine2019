NAME		=	ft_cat
SRCS		=	./srcs/main1001.c \
				./srcs/ft_cat.c
INC_DIR		=	./includes
OBJS		=	${SRCS:.c=.o}
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

.c.o:		${SRCS}
			${CC} ${CFLAGS} -I${INC_DIR} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -L. -lft ${OBJS} -o ${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}
