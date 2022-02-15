#include "Phonebook.class.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip> 
#include <string>
#include <sstream>

Phonebook::Phonebook(void) : n(0), current(0)
{}

Phonebook::~Phonebook(void)
{}

static int stoi( std::string s ) {
    int i;
    std::istringstream(s) >> i;
	std::cout << "i " << i << std::endl; 
    return i;
}

void Phonebook::add(void)
{
	if (this->n == 9)
		this->current = 0;
	std::cout << "enter firstname:" << std::endl;
	std::cin >> this->tab[this->current].firstname;
	std::cout << "enter lastname:" << std::endl;
	std::cin >> this->tab[this-> current].lastname;
	std::cout << "enter nickname:" << std::endl;
	std::cin >> this->tab[this-> current].nickname;
	std::cout << "enter phone number:" << std::endl;
	std::cin >> this->tab[this-> current].phone;
	std::cout << "enter its darkest secret:" << std::endl;
	std::cin >> this->tab[this-> current].secret;
	this->tab[this->current].id = current + 1;
	this->n++;
	this->current++;
}

void Phonebook::print_contact_list(void)
{
	for (int i = 0; i < this->n ; i++)
	{

		std::cout << this->tab[i].id;
		std::cout << "|";
		ft_output(this->tab[i].firstname);
		std::cout << "|";
		ft_output(this->tab[i].lastname);
		std::cout << "|";
		ft_output(this->tab[i].nickname);
		std::cout << "|";
		std::cout << std::endl;
	}
}

void Phonebook::print_contact(int n)
{
		std::cout << n << std::endl;
		std::cout << "firstname : " << this->tab[n - 1].firstname << std::endl;
		std::cout << "lastname : " << this->tab[n - 1].lastname << std::endl;
		std::cout << "nickname : " << this->tab[n - 1].nickname << std::endl;
		std::cout << "phone number : " << this->tab[n - 1].phone << std::endl;
		std::cout << "darkest secret : " << this->tab[n - 1].secret << std::endl;
}

void Phonebook::search(void)
{
	std::string input;

	ft_output("index");
	std::cout << "|";
	ft_output("firstname");
	std::cout << "|";
	ft_output("lastname");
	std::cout << "|";
	ft_output("nickname");
	std::cout << "|" << std::endl;
	this->print_contact_list();
	std::cout << "Selectionnez un index" << std::endl;
	std::cin >> input;
	try {
		stoi(input);
	}
	catch (std::invalid_argument){
		std::cout << "wrong char for index" << std::endl;
		return ;
	}
	if (stoi(input) > this->n)
	{
		std::cout << "index does not exist" << std::endl;
		return ;
	}
	while (input.length() != 1 || !isdigit(input[0]) || stoi(input) < 1)
	{
		std::cout << "wrong input." << std::endl;
		std::cin >> input;
	}
	print_contact(stoi(input));
}