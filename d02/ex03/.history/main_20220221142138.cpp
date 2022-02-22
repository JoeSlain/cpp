/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:37:19 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 14:21:37 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#include "Point.hpp"

int main()
{
	Point	p1 = Point(0, 0);
	Point	p2 = Point(1, 1);
	Point	p3 = Point(-1, 1);

	Point	test = Point(0, 0);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test) ? "true" : "false") << std::endl;

	Point test2 = Point(0.66, 0.66);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test2) ? "true" : "false") << std::endl;

	Point test3 = Point(0, 0.5);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test3) ? "true" : "false") << std::endl;

	Point test4 = Point(-0.68, 0.86);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test4) ? "true" : "false") << std::endl;

	Point test5 = Point(0.5, -0.6);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test5) ? "true" : "false") << std::endl;

	Point test6 = Point(0, 1.01);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test6) ? "true" : "false") << std::endl;
}