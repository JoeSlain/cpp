/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:00:56 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 14:50:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
    return (p1.get_x().toFloat() - p3.get_x().toFloat()) * (p2.get_y().toFloat() - p3.get_y().toFloat()) - (p2.get_x().toFloat() - p3.get_x().toFloat()) * (p1.get_y().toFloat() - p3.get_y().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}