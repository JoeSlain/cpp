/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:11:17 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 14:40:03 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->type = rhs.type;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Animal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void Animal::makeSound() const {
	std::cout << "Animal noise !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Animal::getType() const
{
	return (this->type);
}

/* ************************************************************************** */