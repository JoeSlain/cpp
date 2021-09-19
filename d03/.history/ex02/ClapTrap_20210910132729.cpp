/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/10 13:27:29 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitpoints(100), _energy_pts(50), _attack_dmg(20)
{
	std::cout << "Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _hitpoints(100), _energy_pts(50), _attack_dmg(20)
{
	this->_name = name;
	std::cout << "ClapTRap name constructor called." << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & clp)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = clp;
}
ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called." << std::endl;
}
void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	this->_energy_pts -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " repairs " << amount << " energy points." << std::endl;
	this->_energy_pts += amount;
}
