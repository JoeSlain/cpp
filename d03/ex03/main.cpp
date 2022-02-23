/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:45:36 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/23 15:13:14 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	{
		std::cout << "\n***** Who am I *****" << std::endl;
		DiamondTrap Jumbo = DiamondTrap("Jumbo");
		Jumbo.whoAmI();
	}
	{
		std::cout << "***** herited methods *****" << std::endl;
		DiamondTrap Jumbo = DiamondTrap("Jumbo");
		std::cout << std::endl;
		Jumbo.attack("Test");
		Jumbo.takeDamage(5);
		Jumbo.beRepaired(5);
	}
	{
		std::cout << "\n***** Copy constructor *****" << std::endl;
		DiamondTrap Jumbo = DiamondTrap("Jumbo");
		DiamondTrap Jumbo2 = DiamondTrap(Jumbo);
		Jumbo2.takeDamage(10);
		Jumbo.takeDamage(5);
		Jumbo.whoAmI();
		Jumbo2.whoAmI();
	}
}