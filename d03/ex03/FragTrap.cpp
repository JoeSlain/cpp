/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 14:56:56 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap default constructor called." << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap name constructor called." << std::endl;
}
FragTrap::FragTrap(FragTrap const & clp) : ClapTrap(clp)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = clp;
}
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->get_hitpoints() == 0)
	{
		std::cout << this->get_name() << " is dead, can't highfive." << std::endl;
		return ;
	}
	std::cout << "Highfive wesh" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	if (this->get_hitpoints() == 0)
	{
		std::cout << this->get_name() << " is dead, can't attack." << std::endl;
		return ;
	}
	if (this->get_energy_pts())
	{
		std::cout << "ClapTrap " << this->get_name() << " attack " << target << ", causing " << this->get_attack_dmg() << " points of damage!" << std::endl;
		this->set_energy_pts(this->get_energy_pts() - 1);
	}
	std::cout << "FragTrap " << this->get_name() << " attack " << target << ", causing " << this->get_attack_dmg() << " points of damage!" << std::endl;
}
