# include <iostream>
# include <string.h>
template <typename A, typename L, typename F>
void iter(A *a, L const &b, F &c)
{
	for (int i = 0; i < static_cast<int>(b); i++)
	{
		c(a[i]);
	}
}
