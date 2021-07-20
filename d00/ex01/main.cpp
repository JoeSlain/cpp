#include <iostream>
#include <string.h>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


int main(void)
{
	Phonebook book;
	char command[512];

	(void)args;
	while (1)
	{
		std::cout << "Enter a command:" << std::endl;
		std::cin >> command;
		if (strcmp(command, "EXIT") == 0)
			break ;
		if (strcmp(command, "ADD") == 0)
			Phonebook::add();
	}
	return (0);
}