NAME = Phonebook
CC = clang++
FLAGS =  -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
SOURCES = main.cpp Phonebook.class.cpp Contact.class.cpp utils.cpp

all:
	$(CC) $(FLAGS) $(SOURCES) -o ${NAME}
clean:
	rm ./Phonebook
re: clean all