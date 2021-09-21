/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:08:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/28 21:10:21 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed(void){
		
	};
	
	Fixed(Fixed const & instance);
	~Fixed(void);
	Fixed & operator=(Fixed const & instance);

	int getRawBits(void) const;
	void setRawBits(int const raw);