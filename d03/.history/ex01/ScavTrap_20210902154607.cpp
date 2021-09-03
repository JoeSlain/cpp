/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 15:46:07 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


ClavTrap( void );
ClavTrap(std::string name);
ClavTrap(ClapTrap const & clp);
~ClavTrap( void );
void attack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

