#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm:: ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
	this->_target = "Default target";
}

ShrubberyCreationForm:: ShrubberyCreationForm( const  ShrubberyCreationForm & src )
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137),  _target(target)
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
void ShrubberyCreationForm::action() const
{
	std::ofstream outfile(this->_target);

	outfile << "      /\\    \n     /\\*\\    \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\ \n      ||      \n      ||      \n      || " << std::endl;
}


void ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	this->action();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ShrubberyCreationForm::getTarget()
{
	return this->_target;
}

/* ************************************************************************** */