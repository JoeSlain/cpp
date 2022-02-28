/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_20220224174046.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:28:27 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/25 13:23:15 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
	this->_state = false;
	this->_name = "Default name";
}

Form::Form( const Form & src )
{
	*this = src;
}

Form::Form( std::string name, int grade, int gradeToExec ) : _name(name)
{
	if (grade < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (grade > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	this->_sign_grade = grade;
	this->_exec_grade = gradeToExec;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_state = rhs._state;
	this->_sign_grade = rhs._sign_grade;
	this->_name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", signed: " << i.getState() << ", required grade: " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Form::beSigned(Bureaucrat & obj)
{
	if (obj.getGrade() >= this->_sign_grade)
		throw Form::GradeTooLowException();
	this->_state = true;

}

void Form::execute (Bureaucrat const & executor) const
{
	if (this->_exec_grade < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->_state == false)
		throw Form::FormNotSignedException();
}	

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	std::string const  & Form::getName() const
	{
		return (this->_name);
	}
	int const  & Form::getGrade() const
	{
		return (this->_sign_grade);
	}
	bool const & Form::getState() const
	{
		return (this->_state);
	}

/* ************************************************************************** */