/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:09 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	this->_name = name;
	std::cout << "ClapTrap name constructor called." << std::endl;
}
ClapTrap::ClapTrap(int hp, int ep, int ad) : _hitpoints(hp), _energy_pts(ep), _attack_dmg(ad)
{
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(int hp, int ep, int ad, std::string n) : _name(n), _hitpoints(hp), _energy_pts(ep), _attack_dmg(ad)
{
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
	if (this->_hitpoints == 0)
	{
		std::cout << this->_name << " is dead, can't attack." << std::endl;
		return ;
	}
	if (this->_energy_pts)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
	}
	else
		std::cout << this->_name << " has no energy left, attack aborted." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << this->_name << " is already dead stop attacking..." << std::endl;
		return ;
	}
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
	{
		std::cout << this->_name << " died." << std::endl;
		this->_hitpoints = 0;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << this->_name << " can't repaired when already dead." << std::endl;
		return ;
	}
	if (this->_energy_pts == 0)
	{
		std::cout << this->_name << " has no energy left, can't repair." << std::endl;
		return ;
	}
	std::cout << this->_name << " repairs " << amount << " health points." << std::endl;
	this->_hitpoints += amount;
	if (this->_hitpoints > 10)
		this->_hitpoints = 10;
	this->_energy_pts--;
}

int ClapTrap::get_hitpoints(void)
{
	return this->_hitpoints;
}

int ClapTrap::get_attack_dmg( void )
{
	return this->_attack_dmg;
}

int ClapTrap::get_energy_pts( void )
{
	return this->_energy_pts;
}

std::string ClapTrap::get_name( void )
{
	return this->_name;
}

void ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void ClapTrap::set_energy_pts(int n)
{
	this->_energy_pts = n;
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