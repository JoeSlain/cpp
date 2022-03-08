/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:48:13 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/08 15:00:01 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() : _name("Default name"), _city("somewhere"), _age(100)
{
}

Data::Data(std::string name, std::string city, int age) : _name(name), _city(city), _age(age)
{
}

Data::Data( const Data & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	this->_age = rhs._age;
	this->_name = rhs._name;
	this->_city = rhs._city;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
uintptr_t Data::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/* ************************************************************************** */