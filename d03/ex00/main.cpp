/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:45:36 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/21 15:57:03 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
		std::cout << "===== Energy limit test =====" << std::endl;
		ClapTrap Jumbo = ClapTrap("Jumbo");
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
		ClapTrap Jumbo = ClapTrap("Jumbo");
		Jumbo.takeDamage(10);
		Jumbo.attack("Test");
		Jumbo.beRepaired(0);
	}
	{
		std::cout << "\n***** Take damage test *****" << std::endl;
		ClapTrap Jumbo = ClapTrap("Jumbo");
		Jumbo.takeDamage(1);
		Jumbo.takeDamage(2);
		Jumbo.takeDamage(5);
		Jumbo.takeDamage(5);
		Jumbo.takeDamage(500);
	}
	{
		std::cout << "\n***** Repair test *****" << std::endl;
		ClapTrap Jumbo = ClapTrap("Jumbo");
		Jumbo.beRepaired(1);
		Jumbo.beRepaired(2);
		Jumbo.beRepaired(5);
		std::cout << Jumbo.get_hitpoints() << std::endl;
	}
}