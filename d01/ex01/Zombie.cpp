/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:22:08 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 19:59:24 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}
void Zombie::Zombie_construct(std::string name, int i)
{
	this->name = name;
	this->name += "_";
	this->name += std::to_string(i);
}
Zombie::~Zombie( void )
{
	std::cout << this->_get_name() <<  " destroyed." << std::endl;
}

void Zombie::_announce( void )
{
	std::cout << this->_get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::_get_name( void )
{
	return (name);
}