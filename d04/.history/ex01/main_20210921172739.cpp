/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:04:34 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 17:27:39 by jcueille         ###   ########.fr       */
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
			tab[i]
	}


	
	for (int i = 0; i < SIZE; i++)
		delete tab[i];
}