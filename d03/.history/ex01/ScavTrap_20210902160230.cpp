/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 16:02:30 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
}
ScavTrap::ScavTrap(ClapTrap const & clp)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}
void attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
}

void guardGate()
{
	std::cout << "ScavTrap dhas entered gate keeping mode." << std::endl;
}

