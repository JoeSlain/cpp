/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:11:09 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/21 14:41:04 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongCat : public Animal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		virtual void makeSound() const ;
		virtual const std::string getType() const;

		WrongCat &		operator=( WrongCat const & rhs );

	private:

};

//std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* WrongCAT_H */