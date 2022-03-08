/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:45:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/08 18:58:23 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 10

template <typename T>
void print_array(Array<T> &arr)
{
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

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
    print_array(numbers);
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
    print_array(numbers);
    delete [] mirror;
	
    return 0;
}