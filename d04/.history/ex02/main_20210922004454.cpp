/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:04:34 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/22 00:44:54 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
# define SIZE 10
int main()
{
	const Animal *tab[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < SIZE; i++)
		delete tab[i];
	std::cout << "=======" << std::endl;
	Dog *doggo = new Dog();
	for (int i = 0; i < 100; i++)
		std::cout << doggo->get_brain().getIdea(i) << std::endl;
	delete doggo;
	Animal *Wrong_Animal
	return 0;
}