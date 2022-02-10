
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <map>
# include <vector>
# include <list>
# include <deque>


template<typename T>
bool easyfind(T  a, int b)
{
	if(*std::find(a.begin(), a.end(), b) == b)
		return (true);
	return false;
}

#endif