/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:03:05 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 13:22:13 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.hpp"

Fixed Point::sign (Point p1, Point p2, Point p3)
{
    return (p1._x - p3._x) * (p2._y - p3._y) - (p2._x - p3._x) * (p1._y - p3._y);
}

bool Point::PointInTriangle (Point pt, Point v1, Point v2, Point v3)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}