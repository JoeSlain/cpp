/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:18:12 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/29 14:52:03 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *test = new Data;
	Data *deserialized;
	uintptr_t serialized;

	std::cout << "name: " << test->_name << " age: " << test->_age << " city: " << test->_city << std::endl;
	serialized = test->serialize(test);
	std::cout << serialized << std::endl;
	deserialized = test->deserialize(serialized);
	std::cout << "name: " << deserialized->_name << " age: " << deserialized->_age << " city: " << deserialized->_city << std::endl;
	delete test;
}