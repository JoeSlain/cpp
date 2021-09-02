/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:40 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/31 16:51:20 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <ostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(int i);
		Fixed(float f);
		Fixed(Fixed const & instance);
		~Fixed(void);
		
		Fixed & operator=(Fixed const & instance);
		int operator==(Fixed const & instance);
		int operator<(Fixed const & instance);
		int operator>(Fixed const & instance);
		int operator!=(Fixed const & instance);
		int operator>=(Fixed const & instance);
		int operator<=(Fixed const & instance);
		Fixed operator+(Fixed const & instance);
		Fixed operator-(Fixed const & instance);
		Fixed operator*(Fixed const & instance);
		Fixed operator/(Fixed const & instance);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);	
		
		static Fixed &min(Fixed &a, Fixed &b);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _n;
		const int	_bits = 8;
};
std::ostream & operator<<( std::ostream & o, Fixed const & instance);
#endif