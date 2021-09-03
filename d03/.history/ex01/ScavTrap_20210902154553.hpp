/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:39:06 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 15:45:53 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAVTRAP_HPP
# define CLAVTRAP_HPP
#include "ClapTrap.hpp"

class ClavTrap : public ClapTrap {
	public:
	ClavTrap( void );
	ClavTrap(std::string name);
	ClavTrap(ClapTrap const & clp);
	~ClavTrap( void );
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	
};

#endif