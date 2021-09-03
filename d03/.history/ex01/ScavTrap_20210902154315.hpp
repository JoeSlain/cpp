/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:39:06 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 15:43:15 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAVTRAP_HPP
# define CLAVTRAP_HPP
#include "ClapTrap.hpp"

class ClavTrap : public ClapTrap {
	public:
	ClapTrap( void );
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & clp);
	~ClapTrap( void );
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string _name;
	int _hitpoints;
	int _energy_pts;
	int _attack_dmg;
};

#endif