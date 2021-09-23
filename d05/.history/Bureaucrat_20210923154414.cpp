#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
	void Bureaucrat::increment()
	{
		if (this->_grade -1 < 1)
		{
			throw(Bureaucrat::GradeTooHighException());
			return ;
		}
	}
	void Bureaucrat::decrement();

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	const std::string Bureaucrat::getName();
	int Bureaucrat::getGrade();


/* ************************************************************************** */