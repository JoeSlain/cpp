
NAME = megaphone
SRCS = megaphone.cpp
OBJS_PATH		=	./objs

OBJS			=	$(addprefix $(OBJS_PATH)/, ${SRCS:$(SRCS_EXTENSION)=.o})
OBJS_DEPEND		=	$(addprefix $(OBJS_PATH)/, ${SRCS:$(SRCS_EXTENSION)=.d})


all:
	clang++ -Werror -Wextra -Wall -o $(NAME)
$(NAME): $(OBJS)
fclean:
	rm -rf megaphone