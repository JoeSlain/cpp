/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:45:36 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/02 14:45:33 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "***** Energy limit test *****" << std::endl;
		FragTrap Jumbo = FragTrap("Jumbo");
		std::cout << Jumbo.get_hitpoints() << std::endl;
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
	}
	{
		std::cout << "\n***** Hit points limit test *****" << std::endl;
		FragTrap Jumbo = FragTrap("Jumbo");
		Jumbo.takeDamage(1000);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
	}
	{
		std::cout << "\n***** Take damage test *****" << std::endl;
		FragTrap Jumbo = FragTrap("Jumbo");
		Jumbo.takeDamage(1);
		Jumbo.takeDamage(2);
		Jumbo.takeDamage(5);
		Jumbo.takeDamage(5000);
		Jumbo.takeDamage(5000);
	}
	{
		std::cout << "\n***** Repair test *****" << std::endl;
		FragTrap Jumbo = FragTrap("Jumbo");
		Jumbo.beRepaired(1);
		Jumbo.beRepaired(2);
		Jumbo.beRepaired(5);
		std::cout << std::endl;
		Jumbo.highFivesGuys();
		std::cout << std::endl;
	}
}