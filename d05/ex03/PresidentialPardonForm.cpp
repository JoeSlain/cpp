#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5),  _target("Default Target")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
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
void PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardonned by Zafod Beeblebrox." << std::endl;
} 

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::getTarget()
{
	return this->_target;
}

/* ************************************************************************** */