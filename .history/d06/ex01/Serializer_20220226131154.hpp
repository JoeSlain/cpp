#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <string>

# include <stdint.h>

class Data
{

	public:

		Data();
		Data( Data const & src );
		~Data();

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

		Data &		operator=( Data const & rhs );

		std::string _name;
		short _age;
		std::string _city;
	private:
};




#endif /* ****************************************************** Data_H */