#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <iomanip>
# include <cmath>
# include <cstring>

class Caster
{

	public:

		Caster();
		Caster(const char * & arg);
		Caster( Caster const & src );
		~Caster();

		static void toFloat(char const *);
		static void toDouble(char const *);
		static void toInt(char const *);
		static void toChar(char const *);


		Caster &		operator=( Caster const & rhs );

	private:
		char const * _arg;

};

std::ostream &			operator<<( std::ostream & o, Caster const & i );

#endif /* ********************************************************** CASTER_H */