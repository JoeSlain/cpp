/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:08:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/28 21:18:51 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
	std::cout << "Default constructor called." << std::endl;
};

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called." << std::endl;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}
Fixed & Fixed::operator=(Fixed const & instance)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBit member function called." << std::endl;
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBit member function called." << std::endl;
}