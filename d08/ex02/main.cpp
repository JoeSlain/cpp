/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:54:51 by jcueille          #+#    #+#             */
/*   Updated: 2021/10/05 14:27:11 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stdlib.h> 
#include <iostream>
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
}