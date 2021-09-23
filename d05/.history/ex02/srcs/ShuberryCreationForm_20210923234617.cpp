#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm:: ShrubberyCreationForm() : Form()
{
	this->_target = "Default target";
}

ShrubberyCreationForm:: ShrubberyCreationForm( const  ShrubberyCreationForm & src )
{
	*this = src;
}

ShrubberyCreationForm:: ShrubberyCreationForm(std::string target)

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 ShrubberyCreationForm::~ ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

 ShrubberyCreationForm &				 ShrubberyCreationForm::operator=(  ShrubberyCreationForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o,  ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */