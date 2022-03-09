/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:36:21 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/09 15:01:35 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <string>
# include <map>
# include <vector>
# include <list>
# include <deque>

int main(void)
{

	std::cout << "** Int Vector **" << std::endl;

	std::vector<int> intVector;

	for (int i = 0; i <= 40; i++)
		intVector.push_back(i);

	try
	{
		easyfind(intVector, 25);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(intVector, 40);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	try
	{
		easyfind(intVector, 50);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	std::cout << "** Int List **" << std::endl;

	std::list<int> intList;

	for (int i = 0; i <= 40; i++) {
		intList.push_back(i);
	}

	try
	{
		easyfind(intList, 25);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(intList, 40);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	try
	{
		easyfind(intList, 50);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}