/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:28:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 23:25:21 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon)
{

}

Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType(void) const {
	return (this->type);
}

void Weapon::setType( std::string type )
{
	this->type = type;
}