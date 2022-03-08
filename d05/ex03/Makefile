NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -g -std=c++98 

SRCS_FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
						PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
HEADER_FILES =  Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
						PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

OBJS_PATH = ./obj/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS_FILES:.cpp=.o}}

all: ${NAME}

$(NAME): ${OBJS_PATH} ${OBJS} ${HEADER_FILES}
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