#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _n(0)
{
}

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

void Span::addRange(int a, const int b){
	while (a <= b)
	{
		this->addNumber(a);
		a++;
	}
}

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
	int res = tmp[1] - tmp[0];
	for (unsigned int i = 2; i  < _n; i++)
	{
		if (tmp[i] - tmp[i - 1] < res)
			res = tmp[i] - tmp[i - 1];
	}
	return res;

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

/*
** --------------------------------- CORRECTION ---------------------------------
*/

void Span::print_vector()
{	std::cout << "VECTOR" << std::endl;
	for (std::vector<int>::iterator a = _array.begin() ; a != _array.end() ; a++)
	{
		std::cout << *a << std::endl;
	}
}



/* ************************************************************************** */