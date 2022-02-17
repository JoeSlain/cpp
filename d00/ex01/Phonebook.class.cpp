#include "Phonebook.class.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip> 
#include <cstring>
#include <climits>
#include <sstream>
#include <stdlib.h>
#include <cerrno>

/* CONSTRUCTOR */
Phonebook::Phonebook(void) : n(0), current(0)
{}

Phonebook::~Phonebook(void)
{}

/*
static int stoi( std::string s ) {
    int i;
    std::istringstream(s) >> i;
	std::cout << "i " << i << std::endl; 
    return i;
}
*/
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

/* PUBLIC FUNCTIONS */
void Phonebook::add(void)
{
	std::string tmp;

	if (this->current == 8)
		this->current = 0;
	std::cout << "enter firstname:" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	this->tab[current].set_firstname(tmp);
	std::cout << "enter lastname:" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	this->tab[current].set_lastname(tmp);
	std::cout << "enter nickname:" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	this->tab[current].set_nickname(tmp);
	std::cout << "enter phone number:" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	this->tab[current].set_phone(tmp);
	std::cout << "enter its darkest secret:" << std::endl;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		return ;
	this->tab[current].set_secret(tmp);
	this->tab[this->current].set_id(current + 1);
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