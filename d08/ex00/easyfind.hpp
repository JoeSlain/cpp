
#include <algorithm>

template <typename T>
bool easyfind(T  a, int & b)
{
	if(std::find(a.begin(), a.end(), b) == b)
		return (true);
	return false;
}