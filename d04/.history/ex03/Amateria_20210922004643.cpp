#include "Amateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Amateria::Amateria()
{
}

Amateria::Amateria( const Amateria & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Amateria::~Amateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Amateria &				Amateria::operator=( Amateria const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Amateria const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */