/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:34:34 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/17 20:01:21 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("bigass club");
	bob.attack();
	club.setType("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("smooth round club");
	jim.attack();
}