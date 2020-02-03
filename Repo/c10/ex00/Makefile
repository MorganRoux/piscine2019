NAME		=	ft_display_file
SRCS		=	./ft_display_file.c \
				./main.c
INCS		=	ft_display.h
OBJS		=	${SRCS:.c=.o}
CC			=	gcc
CFLAGS		= 	-Wall -Wextra -Werror

.c.o:		${SRCS} ${INCS}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all :		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:		
			rm -f ${OBJS}
			

fclean:		clean
			rm -f ${NAME}

re:			fclean
			all
