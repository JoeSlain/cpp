#include "Brain.hpp"
#include <sstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		std::stringstream out;
		out << i;
		this->ideas[i] = "Idea" + out.str();
	}
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Brain destructor called." << std::endl;
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
void 		Brain::setIdeas(int i, std::string const idea)
{
	this->ideas[i] = idea;
}

std::string Brain::getIdea(int i)
{
	return (this->ideas[i]);
}

/* ************************************************************************** */