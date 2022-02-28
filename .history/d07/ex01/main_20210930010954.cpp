/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:51:04 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/30 01:09:55 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

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
}