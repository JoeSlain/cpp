/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:42:57 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/28 15:16:49 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name)
{

}
Zombie::~Zombie( void )
{
	std::cout << this->get_name() <<  " destroyed." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name( void )
{
	return (name);
}