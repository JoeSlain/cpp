/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:42:57 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 18:06:32 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name)
{

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