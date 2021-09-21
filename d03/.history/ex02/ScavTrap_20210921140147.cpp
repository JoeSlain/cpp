/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 14:01:47 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

<<<<<<< HEAD
ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name)
=======
ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
>>>>>>> ee76c5e814c0850633e9b16cf2b2142b0e5fb0e8
{
	this->_name = name;
	std::cout << "ScavTrap name constructor called." << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & clp)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = clp;
}
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}
<<<<<<< HEAD
// void ScavTrap::attack(std::string const & target)
// {
// 	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
// }

void guardGate()
=======
void ScavTrap::attack(std::string const & target)
{
 	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
>>>>>>> ee76c5e814c0850633e9b16cf2b2142b0e5fb0e8
{
	std::cout << "ScavTrap dhas entered gate keeping mode." << std::endl;
}

