NAME = megaphone
SRC = megaphone.cpp
CC = c++
CFLAG = -Wall -Wextra -Werror
OBJS = ${SRC:.cpp=.o}
RM = rm -f

${NAME}:	${OBJS}
			${CC} ${CFLAG} ${SRC} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re