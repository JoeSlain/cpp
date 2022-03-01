/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:54:51 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/28 18:14:09 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stdlib.h> 
#include <iostream>
#include <list>
#define MUTANT 0

/*
void randomFill(int n, MutantStack<int> &m)
{
	for(int i = 0; i < n; i++)
		m.push(rand() % 1000);		
}

int main()
{
	MutantStack<int> m;

	randomFill(10, m);
	MutantStack<int>::iterator b = m.begin();
	MutantStack<int>::iterator e = m.end();
	
	while (b != e)
	{
		std::cout << *b << std::endl;
		b++;
	}
}*/


int main()
{
	if (MUTANT)
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		return 0;
	}
	else
	{	
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	//std::cout << mstack.top() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
	return 0;
	}
}