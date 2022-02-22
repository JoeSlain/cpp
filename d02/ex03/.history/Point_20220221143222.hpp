/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:03:10 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 14:32:22 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
	private:
	Fixed _x;
	Fixed _y;

	public:
	Point( void );
	Point( const float x, const float y );
	Point(Point const & src);
	~Point();
	
	Fixed get_x( void );
	Fixed get_y( void );
	Point & operator=(Point const & src);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif