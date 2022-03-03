/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:36:51 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/03 16:57:14 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
		this->floor[i] = 0;
	}
	
}

Character::Character( const Character & src )
{
		for (int i = 0; i < 4; i++)
	{
		delete this->inventory[i];
		delete this->floor[i];
	}
	*this = src;
}

Character::Character( std::string name )
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
		this->floor[i] = 0;
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->inventory[i];
		delete this->floor[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->name = rhs.name;
	for (int i =0; i  < 4; i++)
	{
		this->inventory[i] = rhs.inventory[i];
		this->floor[i] = rhs.floor[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
	{
		this->floor[idx] = this->inventory[idx];
		this->inventory[idx] = 0;		
	}
	
	
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->inventory[idx] != 0)
		this->inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & Character::getName() const
{
	return this->name;
}

/* ************************************************************************** */  