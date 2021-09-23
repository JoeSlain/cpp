#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	class GradeTooLowException : 
	{
		
	}

	class GradeTooHighException
	{

	}
	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string getName();
		int getGrade();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		const std::string _name;
		int _grade;
};


#endif /* ****************************************************** BUREAUCRAT_H */