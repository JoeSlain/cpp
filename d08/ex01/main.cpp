/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:54:57 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/09 15:55:14 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#define TEST_VAL 5
#define TEST_VAL2 10

void random_filler(int n, Span & s)
{

	for (int i = 0; i < n; i++)
	{
		s.addNumber(static_cast<unsigned int>(rand() % 1000000));
	}
}



int main()
{
// MY TEST
	Span test(TEST_VAL);

	random_filler(TEST_VAL + 1, test);
	//test.print_vector();
	std::cout << "longest :" << test.longestSpan() << std::endl;
	std::cout << "shortest :" << 	test.shortestSpan() << std::endl;
	std::cout << std::endl;

	Span test2(TEST_VAL2);

	random_filler(TEST_VAL2, test2);
	//test2.print_vector();
	std::cout << "longest :" << test2.longestSpan() << std::endl;
	std::cout << "shortest :" << 	test2.shortestSpan() << std::endl;
	
// 42 TEST
	{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	
	}
	{
		Span sp = Span(10);
		sp.addRange(0, 5);
		sp.print_vector();
	}
	return 0;
}