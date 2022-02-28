#include "../includes/PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "Default target";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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
void PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardonned by  Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	this->action();
} 

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::getTarget()
{
	return this->_target;
}

/* ************************************************************************** */