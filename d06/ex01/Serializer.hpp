#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <string>
# include <stdint.h>

class Data
{

	public:

		Data();
		Data(std::string name, std::string city, int age);
		Data( Data const & src );
		~Data();

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

		Data &		operator=( Data const & rhs );

		std::string _name;
		std::string _city;
		short _age;
};




#endif /* ****************************************************** Data_H */