#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
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

	};
	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string const  & getName() const;
		int const  & getGrade() const;
		void increment();
		void decrement();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		std::string _name;
		int _grade;
};


#endif /* ****************************************************** BUREAUCRAT_H */