#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure( Cure const & src );
		~Cure();

		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif /* ************************************************************ CURE_H */