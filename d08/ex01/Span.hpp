#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm> 

class Span
{

	public:

		Span( unsigned int n);
		Span( Span const & src );
		~Span();

		void addNumber(int i);
		int shortestSpan();
		int longestSpan();
		void print_vector();
		Span &		operator=( Span const & rhs );

	private:
		unsigned int _n;
		std::vector<int> _array;

};

#endif /* ************************************************************ SPAN_H */