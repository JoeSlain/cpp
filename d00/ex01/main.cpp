#include <iostream>
#include <string.h>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include "utils.hpp"


int main(void)
{
	Phonebook 	book;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command:" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return 0;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else
			std::cout << "\x1B[91mUnknown command please use EXIT, ADD or SEARCH.\033[0m" << '\n' << std::endl;
	}
	return (0);
}