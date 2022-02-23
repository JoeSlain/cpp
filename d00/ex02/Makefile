NAME = account_logger
CC = clang++
FLAGS =  -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
SRCS_FILES = Account.cpp tests.cpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

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