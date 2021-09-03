/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 15:53:26 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name);
ScavTrap::ScavTrap(ClapTrap const & clp);
ScavTrap::~ScavTrap( void );
void attack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
void guardGate();

