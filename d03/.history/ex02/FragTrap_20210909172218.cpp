/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/09 17:21:33 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	std::cout << "FragTrap name constructor called." << std::endl;
}
FragTrap::FragTrap(FragTrap const & clp)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = clp;
}
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
}
// void FragTrap::attack(std::string const & target)
// {
// 	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
// }

void guardGate()
{
	std::cout << "FragTrap dhas entered gate keeping mode." << std::endl;
}

