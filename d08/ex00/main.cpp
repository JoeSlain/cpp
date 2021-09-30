/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:36:21 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/30 18:17:16 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::list<int> mylist (arr,arr+9);
	if (easyfind(mylist, 5))
		std::cout << "FOund" << std::endl;
}