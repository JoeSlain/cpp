/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:01:40 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/28 21:07:28 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Nb {
	public:
		Nb(void);
		Nb(Nb const & instance);
		~Nb(void);
		Nb & operator=(Nb const & instance);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _n;
		const int	_bits = 8;
};