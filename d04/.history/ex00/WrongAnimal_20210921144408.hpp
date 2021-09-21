/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:11:14 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 14:43:43 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WANIMAL_HPP
# define WANIMAL_HPP

# include <iostream>
# include <string>

class WAnimal
{

	public:

		WAnimal();
		WAnimal( WAnimal const & src );
		~WAnimal();

		void makeSound() const ;
		virtual const std::string getType( void ) const;

		WAnimal &		operator=( WAnimal const & rhs );

	protected:
		std::string type;
};

//std::ostream &			operator<<( std::ostream & o, WAnimal const & i );

#endif /* ********************************************************** WANIMAL_H */