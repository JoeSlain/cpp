/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:54:47 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/22 18:09:52 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_name = "Default DiamondName";
	this->set_hitpoints(FragTrap::get_hitpoints());
	this->set_energy_pts(ScavTrap::get_energy_pts());
	this->set_attack_dmg( FragTrap::get_attack_dmg());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	this->_name = name;
	this->set_hitpoints(FragTrap::get_hitpoints());
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj)
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
	this->get_hitpoints() = obj.get_hitpoints();
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

std::string DiamondTrap::get_name(void)
{
	return this->_name ;
}
int DiamondTrap::get_attack_dmg(void)
{
	return this->_attack_dmg;
}
int DiamondTrap::get_hitpoints(void)
{
	return this->_ ;
}
int DiamondTrap::get_energy_pts(void)
{
	return this->_ ;
}

void DiamondTrap::set_name(std::string n);
void DiamondTrap::set_attack_dmg(int n);
void DiamondTrap::set_energy_points(int n);
void DiamondTrap::set_hitpoints(int n);