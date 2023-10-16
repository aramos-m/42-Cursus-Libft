SRCS	=	ft_strlen.c \
			ft_memcpy.c \

OBJS	=	${SRCS:.c=.o}

NAME 	=	libft.a

CC		=	gcc

AR		=	 ar rcs

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			 ${AR}	${NAME}  ${OBJS} 

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
