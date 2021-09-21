#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();


		void 		setIdeas(int i, std::string const ideas);
		Brain &		operator=( Brain const & rhs );

	protected:
		std::string *ideas;

};

//std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */