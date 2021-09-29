/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:33:38 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/30 00:40:27 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
int main()
{
	int a = 5;
	int b = 10;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	swap<int>(a, b);
	std::cout << "----------" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	float x = 10.50;
	float y = 42.42;
	std::cout << max()
}