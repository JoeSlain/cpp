/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:40 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/18 14:02:15 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & instance);
		~Fixed(void);
		Fixed & operator=(Fixed const & instance);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _n;
		static const int	_bits = 8;
};