/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:53:09 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 14:41:06 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
	
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & obj);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &obj);
		
		std::string get_name(void) const;		
		int get_attack_dmg(void);
		int get_hitpoints(void);
		int get_energy_pts(void);

		void set_name(std::string n);
		void set_attack_dmg(int n);
		void set_energy_points(int n);
		void set_hitpoints(int n);	

		void attack(std::string const & target);
		void whoAmI();

	private:
	
		std::string _name;
};

#endif