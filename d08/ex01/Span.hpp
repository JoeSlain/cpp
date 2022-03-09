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
		Span();
		Span( unsigned int n);
		Span( Span const & src );
		~Span();

		void addNumber(int i);
		void addRange(const int a, const int b);
		int shortestSpan();
		int longestSpan();
		void print_vector();
		Span &		operator=( Span const & rhs );

	private:
		unsigned int _n;
		std::vector<int> _array;

};

#endif /* ************************************************************ SPAN_H */