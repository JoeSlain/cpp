#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include <string>

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMateria_H */