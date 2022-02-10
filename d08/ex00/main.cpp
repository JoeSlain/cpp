/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:36:21 by jcueille          #+#    #+#             */
/*   Updated: 2021/10/01 17:38:47 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

template <typename T>
void test(T cont, std::string type)
{
	int arr[10];
	
	std::cout << type << std::endl;
	for(int i = 0; i < 10; i++)
		arr[i] = 0 + ( std::rand() % ( 15 - 0 + 1 ) );
	for(int i = 0; i < 10; i++)
	{
		std::cout << "testing for: " << arr[i] << " ";
		if (easyfind(cont, arr[i]))
			std::cout << "true";
		else
			std::cout << "false";
		std::cout << std::endl;
	}
	std::cout << "----------" << std::endl;
}

int main()
{
	std::list<int> mylist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> myvector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::deque<int> mydeque = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	test(mylist, "LIST");
	test(mydeque, "DEQUE");
	test(myvector, "VECTOR");
	return 0;
}