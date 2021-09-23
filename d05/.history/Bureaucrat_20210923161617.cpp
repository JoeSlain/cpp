#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("DefaultName"), _grade(1)
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
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
	this->_grade = rhs.getGrade();
	this->_name = rhs.getName();
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
			throw(Bureaucrat::GradeTooHighException());
		this->_grade--;
	}
	void Bureaucrat::decrement()
	{
		if (this->_grade + 1 > 150)
			throw(Bureaucrat::GradeTooLowException());
		this->_grade++;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	std::string const  & Bureaucrat::getName() const
	{
		return this->_name;
	}
	int const & Bureaucrat::getGrade() const
	{
		return this->_grade;
	}


/* ************************************************************************** */