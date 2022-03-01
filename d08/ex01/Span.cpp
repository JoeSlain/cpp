#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span( const Span & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_array = rhs._array;
	this->_n = rhs._n;
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int i)
{
	try
	{
		if(this->_array.size() == this->_n)
			throw std::out_of_range("Vector is full");
		this->_array.push_back(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

}

int Span::shortestSpan()
{
	std::vector<int> tmp = this->_array;
	if (this->_array.size() < 2)
		throw std::length_error("Array must contain at least 2 elements.");
	std::sort(tmp.begin(), tmp.end());
	return tmp[1] - tmp[0];

}

int Span::longestSpan()
{
	int min;
	int max;

	if (this->_array.size() < 2)
		throw std::length_error("Array must contain at least 2 elements.");
	min = this->_array[0];
	max = this->_array[0];
	for (unsigned int i = 0; i < this->_n; i++)
	{
		if (_array[i] < min)
			min = _array[i];
		if (_array[i] > max)
			max = _array[i];
	}
	return max - min;
}

void Span::print_vector()
{	std::cout << "VECTOR" << std::endl;
	for (unsigned int i = 0; i < this->_n; i++)
	{
		std::cout << _array[i] << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */