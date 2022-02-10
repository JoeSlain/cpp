#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);

		MutantStack	&operator=(MutantStack const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void) { return (this->c.begin()); };
		iterator	end(void) { return (this->c.end()); };
};

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() { return ;};

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>() { *this = src; };


template<typename T>
MutantStack<T>::~MutantStack(void) { return ;};

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &rhs) {
	if (this == &rhs)
		return (*this);
	std::stack<T>::operator=(rhs);
	return (*this);
}
#endif