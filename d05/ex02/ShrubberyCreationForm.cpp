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


/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream outfile;

	outfile.open(std::string(_target + "_shrubbery").c_str(), std::ios::out | std::ios::app);
	if (outfile.is_open())
	{
		outfile << "      /\\    \n     /\\*\\    \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\ \n      ||      \n      ||      \n      || " << std::endl;
		outfile.close();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ShrubberyCreationForm::getTarget()
{
	return this->_target;
}

/* ************************************************************************** */