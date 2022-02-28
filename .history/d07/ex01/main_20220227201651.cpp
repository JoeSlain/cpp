/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:51:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/27 20:16:51 by jcueille         ###   ########.fr       */
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

// static void ft_dorand(void)
// {
// 	static short int dorand = 0;

// 	if (dorand == 0 && ++dorand)
// 		std::srand(::time(NULL));
// }

template<typename T>
void	DispColorVar(T &c)
{
	// static short int dorand = 0;
	// if (dorand == 0 && ++dorand)
	// 	ft_dorand();

	std::cout << "\e[91m" << c << "\e[m";
}

int		main(void)
{
	std::string	str = "Hello";
	char	array[][10] = {"First\n", "Second\n", "Third\n", "Lol\n"};
	int		ints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 42};

	iter(str.c_str(), str.length(), &DispColorVar); std::cout << std::endl;
std::cout << std::endl;
	iter(array, sizeof(array) / sizeof(*array), &DispColorVar);
std::cout << std::endl;
	iter(ints, sizeof(ints) / sizeof(*ints), &DispColorVar);
std::cout << std::endl;
	return (0);
}