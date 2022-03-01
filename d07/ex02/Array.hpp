#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array{
	public:
	Array();
	Array(unsigned int const &n);
	Array(Array & src);
	~Array();

	Array<T> & operator=(Array const &rhs);
	T & operator[](long int i);
	unsigned int size( void ) const;
	private:
		T *_arr;
		unsigned int _n;
};

	template <typename T>
	Array<T>::Array() : _arr(0), _n(0) {}

	template <typename T>
	Array<T>::Array(unsigned int const &n) : _n(n) {
		this->_arr = new T[n];
		for (unsigned int i = 0; i < this->_n; i++)
			this->_arr[i] = 0;
	}

	template <typename T>
	Array<T>::Array(Array & src)
	{ *this = src; }

	template <typename T>
	Array<T>::~Array()
	{
		if (this->_arr)
			delete [] this->_arr;
	};
	template <typename T>
	Array<T> &Array<T>::operator=(Array<T> const &rhs) 
	{
		if (this == &rhs)
			return (*this);
		this->_n = rhs.size();
		this->_arr = new T[this->_n];
		for (unsigned int i = 0; i < this->size(); i++)
			this->_arr[i] = rhs._arr[i];
		return *this;

	}
	template <typename T>
	T & Array<T>::operator[](long int i)
	{
		if (!(this->_arr))
			throw std::invalid_argument("Empty array");
		if (i < 0 || i >= this->_n)
			throw std::invalid_argument("Wrong index");
		return (this->_arr[i]);
	}
	template <typename T>
	unsigned int Array<T>::size( void ) const
	{
		return this->_n;
	}

#endif