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

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form not signed.");
			}
	};

	public:

		Form();
		Form( Form const & src );
		Form( std::string name, int grade, int gradeToExec );
		virtual ~Form();

		std::string const  & getName() const;
		int const  & Form::getSignGrade() const;
		int const  & Form::getExecGrade() const;
		bool const & getState() const;
		void beSigned(Bureaucrat & obj);
		virtual void execute (Bureaucrat const & executor) const;
		virtual std::string getTarget() = 0;

		Form &		operator=( Form const & rhs );

	private:
		std::string _name;
		bool _state;
		int _sign_grade;
		int _exec_grade;
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */