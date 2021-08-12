/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:38:52 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 19:50:10 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* test = zombieHorde( 10, "jo");
	for (int i = 0; i < 10; i++)
	{
		test[i]._announce();
	}
	delete [] test;
	return (0);
}