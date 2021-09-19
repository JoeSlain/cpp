/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:53:09 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/10 17:43:21 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	
	std::string name;
};