#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{

}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}


Form * Intern::newShrubbery(std::string const & targetForm) 
{
	return new ShrubberyCreationForm(targetForm);
}

Form * Intern::newRobotomy(std::string const & targetForm) 
{
	return new RobotomyRequestForm(targetForm);
}

Form * Intern::newPresidentialPardon(std::string const & targetForm) 
{
	return new PresidentialPardonForm(targetForm);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Intern::t_intern const	Intern::tintern[3] = {
	{"shrubbery creation" , &Intern::newShrubbery},
	{"robotomy request" , &Intern::newRobotomy},
	{"presidential pardon" , &Intern::newPresidentialPardon}
};

Form	*Intern::makeForm(std::string const type, std::string const target) const {
	for (int i = 0; i < 3; i++)
	{
		if (Intern::tintern[i].cmp == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return (Intern::tintern[i].fct(target));
		}
	}
	std::cout << "Error: Form name not recognized" << std::endl;
	return (NULL);
}

/*
Form * Intern::makeForm(std::string name, std::string target)
{
	Form *ret;
	std::string arr[3] = {"shrubberrycreation", "robotomyrequest", "presidentialpardon"};
	Form *(Intern:: *methods_arr[3])(std::string const & targetForm) const = \
	{&Intern::CreateShrubberyCreationForm,	&Intern::CreateRobotomyRequestForm,	&Intern::CreatePresidentialPardonForm};

	for (std::string::iterator it = name.begin(); it != name.end(); it++)
	{
		*it = std::tolower(*it);
		if (*it == ' ')
			name.erase(it--);
	}

	try
	{	
		for (int i = 0; i < 3; i++)
		{
			if (name == arr[i])
			{
				ret = (this->*methods_arr[i])(target);
				std::cout << "Intern creates: " << *ret << std::endl;
				return (ret);
			}
		}
		throw UnknownForm();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */