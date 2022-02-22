/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:03:10 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 13:27:54 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
	private:
	Fixed _x;
	Fixed _y;
	Fixed::Fixed sign (Point p1, Point p2, Point p3);

	public:
	Point( void );
	Point( const Fixed x, const Fixed y );
	Point(Point const & src);
	~Point();
	
	Point & operator=(Point const & src);
	bool PointInTriangle (Point pt, Point v1, Point v2, Point v3);
}

#endif