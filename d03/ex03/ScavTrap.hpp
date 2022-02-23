/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:39:06 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 12:59:13 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTRAP_HPP
# define ScavTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
	ScavTrap( void );
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & clp);
	~ScavTrap( void );
	void attack(std::string const & target);
	void guardGate();
	
};

#endif