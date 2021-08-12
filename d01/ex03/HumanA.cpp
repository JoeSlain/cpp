/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:38:49 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 23:33:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	
}

HumanA::~HumanA()
{

}

void HumanA::attack ( void ) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}