/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:11:06 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/22 00:38:33 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	this->brain = new Brain();
	this->brain = rhs.brain;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Cat const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound() const {
	std::cout << "Cat noise !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string Cat::getType() const
{
	return (this->type);
}
Brain & Cat::get_brain( void ) const {
	return (this->brain);
}

/* ************************************************************************** */