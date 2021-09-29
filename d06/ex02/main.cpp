/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:01:40 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/29 17:40:31 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{

	int i = std::rand() % 3;
	switch (i) {
		case 1:	
			return new A;
		case 2:
			return new B;
		default:
			return new C;
	}
}

void identify(Base * p)
{
	std::cout << "--IDENTIFY POINTER--" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify( Base & p)
{
	std::cout << "--IDENTIFY REFERENCE--" << std::endl;
	try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
	}
	catch(std::exception & e)
	{
		try
		{
			static_cast<void>(dynamic_cast<B &>(p));
			std::cout << "B" << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << "C" << std::endl;
		}
	}
}

int main()
{
	Base *base;
	srand((unsigned) time(0));
	for (int i = 0; i < 5; i++)
	{
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
}
