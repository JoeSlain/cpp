#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low.");
			}
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high.");
			}
	};

	public:

		Form();
		Form( Form const & src );
		Form( std::string name, int grade );
		~Form();

		std::string const  & getName() const;
		int const  & getGrade() const;
		bool const & getState() const;
		void beSigned(Bureaucrat & obj);
		execute (Bureaucrat const & executor) const; 

		Form &		operator=( Form const & rhs );

	private:
		std::string _name;
		bool _state;
		int _requiredGrade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */