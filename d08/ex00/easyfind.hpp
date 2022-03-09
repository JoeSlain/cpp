
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include 	<algorithm>
# include	<stdexcept>

template<typename T>
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator i = std::find(a.begin(), a.end(), b);
	if(*i == b)
		return (i);
	throw std::logic_error("Not found");
}

#endif