/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:14:12 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 14:51:49 by jcueille         ###   ########.fr       */
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
		ClapTrap(int hp, int ep, int ad);
		ClapTrap(int hp, int ep, int ad, std::string n);
		ClapTrap(ClapTrap const & clp);
		~ClapTrap( void );
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int get_hitpoints( void );
		std::string get_name( void ) const;
		int get_attack_dmg( void );
		int get_energy_pts( void );
		
		void set_name(std::string name);
		void set_energy_pts( int n );
		ClapTrap & operator=(ClapTrap const & clp);
	protected:
		std::string _name;
		int _hitpoints;
		int _energy_pts;
		int _attack_dmg;
};

#endif