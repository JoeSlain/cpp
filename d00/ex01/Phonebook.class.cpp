#include "Phonebook.class.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip> 
#include <cstring>
#include <cctype>
#include <climits>
#include <sstream>
#include <stdlib.h>
#include <cerrno>

#define CONTACT_LIMIT 8

/* CONSTRUCTOR */
Phonebook::Phonebook(void) : n(0), current(0)
{}

Phonebook::~Phonebook(void)
{}

/* GETTER / SETTER */

int Phonebook::get_n(void)
{
	return this->n;
}
void Phonebook::set_n(int n)
{
	this->n = n;
}
int Phonebook::get_current(void)
{
	return this->current;
}
void Phonebook::set_current(int n)
{
	this->current = n;
}

static int is_empty(std::string s)
{
	if (s.empty() || s.find_first_not_of(' ') == std::string::npos)
	{
		std::cout << "\n\x1B[91mEmpty input forbidden\033[0m\n" << std::endl;
		return 1;
	}
	return 0;
}

static void add_input(std::string message, int i, Contact & contact)
{
	std::string input;
	while (1)
	{
		std::cout << message << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (is_empty(input))
			continue ;
		switch (i)
		{
		case 1:
			contact.set_firstname(input);
			break;
		case 2:
			contact.set_lastname(input);
			break;
		case 3:
			contact.set_nickname(input);
			break;
		case 4:
			contact.set_phone(input);
			break;
		case 5:
			contact.set_secret(input);
			break;	
		default:
			break;
		}
		break;
	}
}

/* PUBLIC FUNCTIONS */
void Phonebook::add(void)
{
	std::string tmp;

	if (this->current == CONTACT_LIMIT)
		this->current = 0;
	add_input("enter firstname: ", 1, this->tab[current]);
	add_input("enter lastname: ", 2, this->tab[current]);
	add_input("enter nickname: " , 3, this->tab[current]);
	add_input("enter phone number:" , 4, this->tab[current]);
	add_input("enter drakest secret:" , 5, this->tab[current]);

	this->tab[this->current].set_id(current + 1);
	if (n != CONTACT_LIMIT)
		this->n++;
	this->current++;
}

void Phonebook::print_contact_list(void)
{
	for (int i = 0; i < this->n ; i++)
	{

		std::cout << std::setw(10);
		std::cout << this->tab[i].get_id();
		std::cout << "|";
		ft_output(this->tab[i].get_firstname());
		std::cout << "|";
		ft_output(this->tab[i].get_lastname());
		std::cout << "|";
		ft_output(this->tab[i].get_nickname());
		std::cout << "|";
		std::cout << std::endl;
	}
}

void Phonebook::print_contact(int n)
{
		std::cout << n << std::endl;
		std::cout << "firstname : " << this->tab[n - 1].get_firstname() << std::endl;
		std::cout << "lastname : " << this->tab[n - 1].get_lastname() << std::endl;
		std::cout << "nickname : " << this->tab[n - 1].get_nickname() << std::endl;
		std::cout << "phone number : " << this->tab[n - 1].get_phone() << std::endl;
		std::cout << "darkest secret : " << this->tab[n - 1].get_secret() << "\n" << std::endl;
}

void Phonebook::search(void)
{
	std::string input;
	char 		*p;
	long int	n;

	while (1)
	{
		std::cout << "\nSelectionnez un index\nPress 0 to exit\n" << std::endl;
		ft_output("index");
		std::cout << "|";
		ft_output("firstname");
		std::cout << "|";
		ft_output("lastname");
		std::cout << "|";
		ft_output("nickname");
		std::cout << "|" << std::endl;


		this->print_contact_list();
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "\n\x1B[91mWrong index input please choose again:\033[0m\n" << std::endl;
			continue ;
		}
		n = strtol(input.c_str(), &p, 10);
		if (n > INT_MAX || errno == ERANGE || n > this->n || n < 0)
		{
			std::cout << "\n\x1B[91mWrong index input please choose again:\033[0m\n" << std::endl;
			continue ;
		}
		break;
	}
	if (n != 0)
		print_contact((int)n);
}