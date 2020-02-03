NAME		=	ft_tail
SRCS		=	./srcs/main1002.c \
				./srcs/ft_tail.c
INCS		=	ft_tail.h
OBJS		=	${SRCS:.c=.o}
INC_DIR		=	./includes
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
