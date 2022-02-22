/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:03:05 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 14:36:06 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}

Point::Point(const float x, const float y) : _x(x), _y(y)
{}

Point::Point(Point const & src)
{
	*this = src;
}

Point::~Point()
{}

Point & Point::operator=(Point const & src)
{
	this->_x = src._x;
	this->_y = src._y;
}

Fixed Point::get_x( void )
{
	return this->_x;
}
Fixed Point::get_y( void )
{
	return this->_y;
}