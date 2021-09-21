/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:04:34 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 17:26:29 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
# define SIZE SIZE
int main()
{
	const Animal *tab[SIZE];

	for (int i = 0; i <= 4; i++)
		tab[i] = new Cat();
	for (int i = 5; i < SIZE; i++)
		tab[i] = new Dog();

	
	for (int i = 0; i < SIZE; i++)
		delete tab[i];
}