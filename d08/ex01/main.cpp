/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:54:57 by jcueille          #+#    #+#             */
/*   Updated: 2021/10/04 15:04:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void random_filler(int n, Span & s)
{

	for (int i = 0; i < n; i++)
	{
		s.addNumber(static_cast<unsigned int>(rand() % 1000));
	}
}



int main()
{
	Span test(5);

	random_filler(5, test);
	test.print_vector();
	std::cout << "longest :" << test.longestSpan() << std::endl;
	std::cout << "shortest :" << 	test.shortestSpan() << std::endl;

	Span test2(1000);

	random_filler(1000, test2);
	test2.print_vector();
	std::cout << "longest :" << test2.longestSpan() << std::endl;
	std::cout << "shortest :" << 	test2.shortestSpan() << std::endl;
	
}