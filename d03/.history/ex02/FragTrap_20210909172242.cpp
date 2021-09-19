/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/09 17:22:42 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	std::cout << "FragTrap name constructor called." << std::endl;
}
FragTrap::FragTrap(FragTrap const & clp)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = clp;
}
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void highFivesGuys(void)
{
	
}

