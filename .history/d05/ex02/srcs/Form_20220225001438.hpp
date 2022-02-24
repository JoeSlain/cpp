#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "../includes/"

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
		Form( std::string name, int sign_grade, int exec_grade );
		~Form();

		std::string const  & getName() const;
		int const  & getGrade() const;
		bool const & getState() const;
		void beSigned(Bureaucrat & obj);

		Form &		operator=( Form const & rhs );

	private:
		const std::string _name;
		bool _state;
		const int _sign_grade;
		const int _exec_grade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */