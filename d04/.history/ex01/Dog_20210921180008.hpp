#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		virtual void makeSound() const ;
		virtual const std::string getType() const;
		Brain const *get_brain( void ) const ;

		Dog &		operator=( Dog const & rhs );

	private:
		Brain *brain;

};

//std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */