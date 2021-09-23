#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{

	public:

		Character();
		Character( std::string name );
		Character( Character const & src );
		~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	private:
		AMateria *inventory[4];
		std::string name;


};

#endif /* ******************************************************* CHARACTER_H */