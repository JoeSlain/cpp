#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->type = rhs.type;
	this->brain = new Brain();
	this->brain = rhs.brain;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Dog const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound() const {
	std::cout << "Dog noise !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string Dog::getType() const
{
	return (this->type);
}

/* ************************************************************************** */