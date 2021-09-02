/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:40 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/30 17:28:17 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
	public:
		Fixed(void);
		Fixed(int x);
		Fixed(float x);
		Fixed(Fixed const & instance);
		~Fixed(void);
		Fixed & operator=(Fixed const & instance);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _n;
		const int	_bits = 8;
};