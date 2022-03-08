/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:51:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/08 18:31:35 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>


template<typename T>
void	iter(T *a, size_t b, void (*c)(T &))
{
	for (size_t i = 0; i < b; i++)
		c(a[i]);
}

template<typename T>
void	DispColorVar(T &c)
{
	std::cout << "\e[91m" << c << "\e[m";
}

int		main(void)
{
	std::string	str = "Hello";
	int		ints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 42};
	char	array[][10] = {"Test1\n", "Test2\n", "Test3\n"};

	iter(str.c_str(), str.length(), &DispColorVar); std::cout << std::endl;
std::cout << std::endl;
	iter(array, sizeof(array) / sizeof(*array), &DispColorVar);
std::cout << std::endl;
	iter(ints, sizeof(ints) / sizeof(*ints), &DispColorVar);
std::cout << std::endl;
	return (0);
}