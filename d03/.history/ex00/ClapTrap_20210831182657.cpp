/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/31 18:26:57 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	
}
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
}
ClapTrap::ClapTrap(ClapTrap const & clp);
ClapTrap::~ClapTrap( void );
void attack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

std::string _name;
int _hitpoints;
int _energy_pts;
int attack_dmg;