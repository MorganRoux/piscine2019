NAME		=	ft_hexdump
SRCS		=	./srcs/main1003.c \
				./srcs/ft_hexdump.c
INCS		=	ft_hexdump.h
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
