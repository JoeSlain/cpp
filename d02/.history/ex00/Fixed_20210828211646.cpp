/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:08:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/28 21:16:46 by jcueille         ###   ########.fr       */
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
	std::cout << "Default destructor called." << std::endl;
}
Fixed & Fixed::operator=(Fixed const & instance)
{
	
}

int Fixed::getRawBits(void) const
{
	
}
void Fixed::setRawBits(int const raw)
{
	
}