#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class ICharacter
{

	public:

		ICharacter();
		ICharacter( ICharacter const & src );
		~ICharacter();

		ICharacter &		operator=( ICharacter const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ICharacter const & i );

#endif /* ****************************************************** ICHARACTER_H */