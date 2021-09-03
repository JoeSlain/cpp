/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:45:36 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/03 01:08:28 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap clap("Jo");
	
	clap.attack("trap");
	clap.takeDamage(5);
	clap.beRepaired(3);
	return 0;
}