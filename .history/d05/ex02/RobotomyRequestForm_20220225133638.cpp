#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form("RobotomyRequestForm", 72, 45)
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_target = rhs._target;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::action() const
{
	std::cout << "* Bzzz bzzzz *" << std::endl;
	if (rand() % 2)
		std::cout << "Robotomy success on " << this->_target << std::endl;
	else
		std::cout << "Robotomy failure on " << this->_target << std::endl;
}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	this->action();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string RobotomyRequestForm::getTarget()
{
	return this->_target;
}

/* ************************************************************************** */