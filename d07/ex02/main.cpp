/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:45:04 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/30 15:16:28 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> arr(5);	
	
	std::cout << arr[1] << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		arr[i] = rand();
		std::cout << arr[i] << std::endl;
	}
	std::cout << "----------" << std::endl;
	Array<int> arr2 = arr;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << "---------" << std::endl;

	try
	{
		std::cout << arr[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<float> test;
	try
	{
		std::cout << test[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	return 0;
}