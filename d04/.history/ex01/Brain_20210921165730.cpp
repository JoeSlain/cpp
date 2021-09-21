#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain( const Brain & src )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Cat destructor called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->ideas = rhs.ideas;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void 		Brain::setIdeas(int i, std::string *ideas)
{
	this->ideas[i] = ideas[i];
}

/* ************************************************************************** */