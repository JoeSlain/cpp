/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:33:38 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/30 00:36:28 by jcueille         ###   ########.fr       */
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
	std::cout <<  << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}