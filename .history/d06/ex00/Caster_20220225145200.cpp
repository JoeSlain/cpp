/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:56:22 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/25 14:52:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Caster::Caster()
{
}

Caster::Caster(const char * & arg)
{
	this->_arg = arg;
}

Caster::Caster( const Caster & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Caster::~Caster()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Caster &				Caster::operator=( Caster const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Caster::toFloat(char const *arg)
{
	float f;

	std::cout << "float: ";
	f = strtof(arg, NULL);
	if (!f && strcmp("0", arg))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::setprecision(9) << f;
	if (f - floor(f) == 0)
			std::cout << ".0";
	std::cout << "f" <<std::endl;	
}
void Caster::toDouble(char const *arg)
{
	double d;

	std::cout << "double: ";
	d = strtod(arg, NULL);
	if (!d && strcmp("0", arg))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::setprecision(15) << d;
	if (d - floor(d) == 0)
			std::cout << ".0";
	std::cout << std::endl;	
}
void Caster::toInt(char const *arg)
{
	long int l;
	std::cout << "int :";
	l = strtol(arg, 0, 10);
	if (l > INT_MAX || l < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(l);
	std::cout << std::endl;
}
void Caster::toChar(char const *arg)
{
	int i;

	std::cout << "char: ";
	i = atoi(arg);
	if ((!i && strcmp("0", arg)) || i < CHAR_MIN || i > CHAR_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isprint(static_cast<char>(i)))
		std::cout << static_cast<char>(i);
	else
		std::cout << "Not displayable.";
	std::cout << std::endl;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */