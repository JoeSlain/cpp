#include <string>
#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

void ft_output( std::string s )
{
	if (s.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << s;
	}
	else if (s.length() > 10)
		std::cout << s.substr(0, 8) << ".";
}

