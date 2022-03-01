/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:36:21 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/28 17:34:11 by jcueille         ###   ########.fr       */
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
	std::list<int> mylist;
	std::vector<int> myvector; 
	std::deque<int> mydeque;
	for (int i = 0; i < 10; i++)
	{
		mylist.push_back(i);
		mydeque.push_back(i);
		myvector.push_back(i);
	}
	test(mylist, "LIST");
	test(mydeque, "DEQUE");
	test(myvector, "VECTOR");
	return 0;
}