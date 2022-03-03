/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:14:12 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/02 14:20:06 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap {

	public:
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & clp);
		~ClapTrap( void );
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int get_hitpoints( void );
		ClapTrap & operator=(ClapTrap const & clp);
	private:
		std::string _name;
		int _hitpoints;
		int _energy_pts;
		int _attack_dmg;
};

#endif