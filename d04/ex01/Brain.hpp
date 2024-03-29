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


		void 		setIdeas(int i, std::string const idea);
		std::string getIdea(int i);
		Brain &		operator=( Brain const & rhs );

	protected:
		std::string ideas[100];

};

//std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */