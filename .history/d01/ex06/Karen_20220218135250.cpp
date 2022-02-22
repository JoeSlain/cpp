/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:29:39 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/18 13:52:50 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


void Karen::complain(std::string level)
{
	std::string levels[4] = { "debug", "info", "warning", "error" };
	typedef void (Karen::*Messages)( void );
	Messages msg[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (!(level.compare(levels[i])))
		{
			switch (i)
			{
				case 0:
					(this->*(msg[0]))();
				case 1:
					(this->*(msg[1]))();
				case 2:
					(this->*(msg[2]))();
				case 3:
					(this->*(msg[3]))();
			}
			break;
		}
		else
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl
	}
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}