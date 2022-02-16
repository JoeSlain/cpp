#include <iostream>
#include <string.h>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include "utils.hpp"


int main(void)
{
	Phonebook 	book;
	int			*current;
	char 		command[512];

	while (1)
	{
		std::cout << "Enter a command:" << std::endl;
		std::cin >> command;
		if ( char *p = strchr( command, ' ' ) )
			*p = '\0';
		if (strcmp(command, "EXIT") == 0)
			break ;
		else if (strcmp(command, "ADD", &current) == 0)
			book.add();
		else if (strcmp(command, "SEARCH") == 0)
			book.search();
		else
			std::cout << "Unknown command please use EXIT, ADD or SEARCH." << '\n' << std::endl;
	}
	return (0);
}