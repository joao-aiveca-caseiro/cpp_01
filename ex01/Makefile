SRCS		= main.cpp\
				zombieHorde.cpp\
				Zombie.cpp
INCS		= Zombie.hpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= test
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):	${OBJS} ${INCS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all