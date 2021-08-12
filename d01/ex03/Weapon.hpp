/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:29:56 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 23:25:21 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string &getType(void) const;
		void setType( std::string type );
	private:
		std::string type;

};

#endif