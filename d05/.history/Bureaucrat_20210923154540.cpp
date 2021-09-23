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
		this->_grade--;
	}
	void Bureaucrat::decrement()
	{
		if (this->_grade + 1 > 150)
		{
			throw(Bureaucrat::GradeTooLowException());
			return ;
		}
		this->_grade++;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	const std::string Bureaucrat::getName()
	{
		return this->_name;
	}
	int Bureaucrat::getGrade()
	{
		return this->_grade;
	}


/* ************************************************************************** */