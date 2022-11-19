NAME = main
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -MMD
OBJS = ${SRC:.cpp=.o}
DEP = ${SRC:.cpp=.d}
RM = rm -f

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAG} ${SRC} -o ${NAME}

all:		${NAME}

-include ${DEP}

clean:
			${RM} ${OBJS} ${DEP}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re