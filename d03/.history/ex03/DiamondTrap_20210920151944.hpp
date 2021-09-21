/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:53:09 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/20 15:19:44 by jcueille         ###   ########.fr       */
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
		
		void attack(std::string const & target);
		void whoAmI();

	private:
	
		std::string _name;
};

#endif