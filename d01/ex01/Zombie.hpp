/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:21:39 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/10 19:56:34 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie( void );
		void Zombie_construct(std::string name, int i);
		void _announce( void );
		std::string _get_name( void );


	private:
		std::string name;

};
Zombie* zombieHorde( int N, std::string name );
#endif