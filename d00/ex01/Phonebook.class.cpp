#include "Phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	this->n = 1;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void Phonebook::add(void)
{
	char args[5][1024];

	std::cout << "enter firstname:" << std::endl;
	std::cin >> args[0];
	std::cout << "enter lastname:" << std::endl;
	std::cin >> args[1];
	std::cout << "enter nickname:" << std::endl;
	std::cin >> args[2];
	std::cout << "enter phone number:" << std::endl;
	std::cin >> args[3];
	std::cout << "enter its darkest secret:" << std::endl;
	std::cin >> args[4];

	if (this->n == 8)
		this->n = 1;
	Contact this->tab[this->n]; 
}