#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string getName();
		int getNote

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		const std::string _name;
		int _note;
};


#endif /* ****************************************************** BUREAUCRAT_H */