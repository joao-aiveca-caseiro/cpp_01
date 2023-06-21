SRCS		= main.cpp\
				zombieHorde.cpp\
				Zombie.cpp
INCS		= Zombie.hpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= test
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):	${OBJS} ${INCS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all