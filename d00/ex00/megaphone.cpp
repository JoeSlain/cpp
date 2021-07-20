#include <iostream>
#include <cctype>
#include <cstring>

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNREADABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i=1; i<argc ; i++)
	{
		for(size_t j = 0; j < std::strlen(argv[i]); j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}