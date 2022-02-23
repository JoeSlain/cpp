/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:54:47 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 15:11:59 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_name = "Default DiamondName";
	_hitpoints = 100;
	_energy_pts = 50;
	_attack_dmg = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) : ClapTrap(obj.get_name() + "_clap_name"), FragTrap(obj.get_name() + "_clap_name"), ScavTrap(obj.get_name() + "_clap_name")
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energy_pts = obj._energy_pts;
	this->_attack_dmg = obj._attack_dmg;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Claptrap's name is: " << ClapTrap::get_name() << " DiamondTrap name is: " << this->_name << std::endl;
}

std::string DiamondTrap::get_name(void) const
{
	return this->_name ;
}
int DiamondTrap::get_attack_dmg(void)
{
	return this->_attack_dmg;
}
int DiamondTrap::get_hitpoints(void)
{
	return this->_hitpoints ;
}
int DiamondTrap::get_energy_pts(void)
{
	return this->_energy_pts ;
}