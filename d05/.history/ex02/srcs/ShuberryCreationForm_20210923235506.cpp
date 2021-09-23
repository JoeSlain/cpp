#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm:: ShrubberyCreationForm() : Form("ShrubberyCreation", 145)
{
	this->_target = "Default target";
}

ShrubberyCreationForm:: ShrubberyCreationForm( const  ShrubberyCreationForm & src )
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("ShrubberyCreation", 145)
{
}

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
	this->_target = rhs._target;
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
void action()
{
	std::ofstream this->t
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */