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


Form * Intern::CreateShrubberyCreationForm(std::string const & targetForm) const
{
	return new ShrubberyCreationForm(targetForm);
}

Form * Intern::CreateRobotomyRequestForm(std::string const & targetForm) const
{
	return new RobotomyRequestForm(targetForm);
}

Form * Intern::CreatePresidentialPardonForm(std::string const & targetForm) const
{
	return new PresidentialPardonForm(targetForm);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
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
			if (!(name.compare(arr[i])))
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
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */