/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:56:04 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/08 14:01:22 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments.";
		return (-1);
	}
	Caster::toChar(argv[1]);
	Caster::toInt(argv[1]);
	Caster::toFloat(argv[1]);
	Caster::toDouble(argv[1]);

	return (0);
}