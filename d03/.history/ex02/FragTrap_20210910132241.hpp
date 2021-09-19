/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:39:06 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/10 13:22:41 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap(std::string name);
		FragTrap(FragTrap const & clp);
		~FragTrap( void );
		void attack(std::string const & target);
		void highFivesGuys(void);
	
};

#endif