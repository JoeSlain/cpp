# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 17:57:18 by jcueille          #+#    #+#              #
#    Updated: 2022/03/08 14:46:46 by jcueille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS_FILES = main.cpp mutantstack.cpp

OBJS_PATH = ./obj/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS_FILES:.cpp=.o}}

all: ${NAME}

$(NAME): ${OBJS_PATH} ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS_PATH}:
	@mkdir -p $@

${OBJS_PATH}%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re