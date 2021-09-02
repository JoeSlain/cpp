/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:08:25 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/28 21:08:41 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	Nb(void){
		
	}
	Nb(Nb const & instance);
	~Nb(void);
	Nb & operator=(Nb const & instance);

	int getRawBits(void) const;
	void setRawBits(int const raw);