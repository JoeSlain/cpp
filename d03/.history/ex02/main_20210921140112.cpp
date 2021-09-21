/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:45:36 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 14:01:11 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
<<<<<<< HEAD
#include "FragTrap.hpp"

int main( void )
{
	FragTrap frag("Jo");
	
	frag.attack("trap");
	frag.takeDamage(5);
	frag.beRepaired(3);
	frag.highFivesGuys();
=======

int main( void )
{
	ScavTrap clap("Jo");
	
	clap.attack("trap");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.guardGate();
>>>>>>> ee76c5e814c0850633e9b16cf2b2142b0e5fb0e8
	return 0;
}