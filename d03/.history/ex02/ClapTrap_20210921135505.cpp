/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 13:55:04 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitpoints(100), _energy_pts(50), _attack_dmg(20)
{
	std::cout << "Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name, int _hitpoints, int _energy_pts, int _attack_dmg ) : _hitpoints(_hitpoints), _energy_pts(_energy_pts), _attack_dmg(_attack_dmg)
{
	this->_name = name;
	std::cout << "ClapTrap constructor called." << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & clp)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = clp;
}
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called." << std::endl;
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

ClapTrap &ClapTrap::operator=(ClapTrap const &clp)
{
	if (this == &clp)
		return (*this);
	this->_name = clp._name;
	this->_hitpoints = clp._hitpoints;
	this->_energy_pts = clp._energy_pts;
	this->_attack_dmg = clp._attack_dmg;
	return (*this);
}
