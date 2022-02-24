/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:11:14 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/24 16:12:44 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal( Animal const & src );
		virtual ~Animal();

		virtual void makeSound() const ;
		virtual const std::string getType( void ) const = 0;

		Animal &		operator=( Animal const & rhs );

	protected:
		Animal();
		std::string type;
};

//std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */