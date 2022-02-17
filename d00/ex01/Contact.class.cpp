#include "Contact.class.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

std::string	Contact::get_firstname(void)
{
	return this->firstname;
}
std::string	Contact::get_lastname(void)
{
	return this->lastname;
}
std::string	Contact::get_nickname(void)
{
	return this->nickname;
}
std::string	Contact::get_phone(void)
{
	return this->phone;
}
std::string	Contact::get_secret(void)
{
	return this->secret;
}
int		Contact::get_id(void)
{
	return this->id;
}

void	Contact::set_firstname(std::string s)
{
	this->firstname = s;
}
void	Contact::set_lastname(std::string s)
{
	this->lastname = s;
}
void	Contact::set_nickname(std::string s)
{
	this->nickname = s;
}
void	Contact::set_phone(std::string s)
{
	this->phone = s;
}
void	Contact::set_secret(std::string s)
{
	this->secret = s;
}
void	Contact::set_id(int id)
{
	this->id = id;
}	