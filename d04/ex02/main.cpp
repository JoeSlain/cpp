/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:04:34 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/03 13:45:44 by jcueille         ###   ########.fr       */
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
	std::cout << "*****==" << std::endl;
	Dog *doggo = new Dog();
	for (int i = 0; i < 100; i++)
		std::cout << doggo->get_brain().getIdea(i) << std::endl;
	delete doggo;
	//Animal *Wrong = new Animal();
	return 0;
}