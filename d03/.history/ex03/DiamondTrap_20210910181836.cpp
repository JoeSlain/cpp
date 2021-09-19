/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:54:47 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/10 18:18:36 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitpoints = clp._hitpoints;
	this->_energy_pts = clp._energy_pts;
	this->_attack_dmg = clp._attack_dmg;
	return (*this);
}