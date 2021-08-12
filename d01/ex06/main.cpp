/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:27:37 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/12 15:44:54 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	std::string level;
	Karen karen;
	if (argc < 2)
		return (-1);
	level = argv[1];
	karen.complain(level);
	
	return 0;
	
}