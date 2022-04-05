# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggiquiau <ggiquiau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:08:22 by ggiquiau          #+#    #+#              #
#    Updated: 2022/04/05 17:54:23 by ggiquiau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
					
OBJS            = ${SRCS:%.cpp=${OBJS_DIR}/%.o}

OBJS_DIR		= objs


HEADERS			= Animal.hpp WrongAnimal.hpp Dog.hpp Cat.hpp WrongCat.hpp

CXX  			=  c++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98


NAME 			= animal

RM 				= rm -f


${OBJS_DIR}/%.o:	%.cpp ${HEADERS}
					${CXX} -c ${CXXFLAGS} -o $@ $<

all:			${NAME}

${NAME}:		$(OBJS)
				${CXX} ${OBJS} ${CXXFLAGS} ${LDFLAGS} -o $@

$(OBJS):		| ${OBJS_DIR}

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				${RM} ${OBJS} ${OBJS_BONUS}

fclean:
				${RM} ${OBJS} ${OBJS_BONUS} ${NAME}
				@rm -fd ${OBJS_DIR} || true

re:
				${MAKE} fclean
				${MAKE} all

.PHONY:			all clean fclean re
