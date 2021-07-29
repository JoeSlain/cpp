#include "Phonebook.class.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip> 
#include <string>

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
	if (this->n == 9)
	{
		std::cout << "Your Phonebook is full you can't add any more entries" << std::endl;
		return ;
	}
	std::cout << "enter firstname:" << std::endl;
	std::cin >> this->tab[this->n - 1].firstname;
	std::cout << "enter lastname:" << std::endl;
	std::cin >> this->tab[this->n - 1].lastname;
	std::cout << "enter nickname:" << std::endl;
	std::cin >> this->tab[this->n - 1].nickname;
	std::cout << "enter phone number:" << std::endl;
	std::cin >> this->tab[this->n - 1].phone;
	std::cout << "enter its darkest secret:" << std::endl;
	std::cin >> this->tab[this->n - 1].secret;
	this->n += 1;
}

void Phonebook::print_contact_list(void)
{
	for (int i = 0; i < this->n - 1; i++)
	{
		if (this->n != 8 && i == this->n - 1)
			break;
		ft_output(std::to_string(i + 1));
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
		std::cout << std::to_string(n) << std::endl;
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
	while (input.length() != 1 || !isdigit(input[0]) || std::stoi(input) < 1 || std::stoi(input) > this->n)
	{
		std::cout << "wrong input, please try again between" << std::endl;
		std::cin >> input;
	}
	print_contact(std::stoi(input));
}