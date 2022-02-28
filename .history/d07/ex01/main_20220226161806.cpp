/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:51:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/26 16:18:05 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
/*
void inc(int &a)
{
	a++;
}

void inc2(char &a)
{
	a++;
}

int main()
{
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	char arr2[] = "Hello";
	iter(arr, 9, inc);
	iter(arr2, 9, inc2);
	for (int i = 0; i < 9; i++)
		std::cout << arr[i] << std::endl;

	for (size_t i = 0; i < strlen(arr2); i++)
		std::cout << arr2[i] << std::endl;
}*/

template<typename T>
void	iter(T *a, size_t b, void (*c)(T &))
{
	for (size_t i = 0; i < b; i++)
		c(a[i]);
}

static void ft_dorand(void)
{
	static short int dorand = 0;

	if (dorand == 0 && ++dorand)
		std::srand(::time(NULL));
}

template<typename T>
void	DispColorVar(T &c)
{
	static short int dorand = 0;
	if (dorand == 0 && ++dorand)
		ft_dorand();
	std::string color = "\e[9";
	color += std::rand() % 7 + 48;
	color += "m";
	std::cout << color << c << "\e[m";
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