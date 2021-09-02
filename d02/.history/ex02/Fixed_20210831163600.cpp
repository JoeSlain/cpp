/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:08:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/31 16:36:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _n(0) {

}

Fixed::Fixed(int i)
{
	this->_n = (i << Fixed::_bits);
}
Fixed::Fixed(float f)
{
	this->_n = roundf(f * (1 << Fixed::_bits));
}

Fixed::Fixed(Fixed const & instance)
{
	this->_n = instance.getRawBits();
}

Fixed::~Fixed(void)
{

}
Fixed & Fixed::operator=(Fixed const & instance)
{
	this->_n = instance.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_n);
}
void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
float	Fixed::toFloat(void) const {
	return ((float)this->_n / (1 << Fixed::_bits));
}

int		Fixed::toInt(void) const {
	return (this->_n >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const & instance) {
	o << instance.toFloat();
	return (o);
}

int Fixed::operator==(Fixed const & instance)
{
	return (this->_n == instance._n ? 1 : 0);
}
int Fixed::operator<(Fixed const & instance)
{
	return (this->_n < instance._n ? 1 : 0);
}
int Fixed::operator>(Fixed const & instance)
{
	return (this->_n > instance._n ? 1 : 0);
}

int Fixed::operator!=(Fixed const & instance)
{
	return (this->_n == instance._n ? 1 : 0);

}

int Fixed::operator>=(Fixed const & instance)
{
	return (this->_n >= instance._n ? 1 : 0);
}
int Fixed::operator<=(Fixed const & instance)
{
	return (this->_n <= instance._n ? 1 : 0);
}

Fixed Fixed::operator+(Fixed const & instance)
{
	return (Fixed(this->_n + instance._n));
}
Fixed Fixed::operator-(Fixed const & instance)
{
	return (Fixed(this->_n - instance._n));
}
Fixed Fixed::operator*(Fixed const & instance)
{
	return (Fixed(this->toFloat() * instance.toFloat()));
}
Fixed Fixed::operator/(Fixed const & instance)
{
		if (instance._n == 0)
	{
		std::cerr << "Division with 0!" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / instance.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->_n++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->_n--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed dummy(*this);

	this->_n++;
	return (dummy);
}
Fixed Fixed::operator--(int)
{
	Fixed dummy(*this);

	this->_n--;
	return (dummy);
}