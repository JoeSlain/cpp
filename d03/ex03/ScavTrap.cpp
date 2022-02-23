/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 14:57:06 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & clp) : ClapTrap(clp)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = clp;
}
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}
void ScavTrap::attack(std::string const & target)
{
	if (this->get_hitpoints() == 0)
	{
		std::cout << _name << " is dead, can't attack." << std::endl;
		return ;
	}
	if (_energy_pts)
	{
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
		this->set_energy_pts(_energy_pts - 1);
	}
	else
		std::cout << _name << " has no energy left, attack aborted." << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->get_hitpoints() == 0)
	{
		std::cout << _name << " is dead, can't enter gate keeping mode." << std::endl;
		return ;
	}
	std::cout << "ScavTrap has entered gate keeping mode." << std::endl;
}

