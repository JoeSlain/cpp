/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:28:27 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/24 21:46:45 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() _name(""), _state(false),  _sign_grade(0), _exec_grade(0)
{
}

Form::Form( const Form & src )
{
	*this = src;
}

Form::Form( std::string name, int grade ) : _name(name), _sign_grade(grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
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
	if ( this == &rhs )
		return *this;
	this->_state = rhs._state;
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