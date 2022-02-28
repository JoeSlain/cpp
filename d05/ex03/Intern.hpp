#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Form * makeForm(std::string name, std::string target);
		Form * CreateShrubberyCreationForm(std::string const & targetForm) const;
		Form * CreateRobotomyRequestForm(std::string const & targetForm) const;
		Form * CreatePresidentialPardonForm(std::string const & targetForm) const;
		Intern &		operator=( Intern const & rhs );

	class UnknownForm : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Unknown form.");
			}
	};

};

#endif /* ********************************************************** INTERN_H */