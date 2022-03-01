/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:45:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/28 15:50:07 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*
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
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	Array<int> copy(numbers);
	copy[0] = numbers[0] - 1;
	std::cout << "Modified: " << copy[0] << " Original: " << numbers[0] << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	
    return 0;
}