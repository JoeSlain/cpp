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

		Form * makeForm(const std::string name, const std::string target) const;
		Intern &		operator=( Intern const & rhs );

	class UnknownForm : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Unknown form.");
			}
	};
	private:
		typedef struct	s_intern
		{
			std::string cmp;
			Form		*(*fct)(std::string const &target);
		}	t_intern;
		static t_intern	const	tintern[3];
		static Form		*newShrubbery(std::string const &target);
		static Form		*newRobotomy(std::string const &target);
		static Form		*newPresidentialPardon(std::string const &target);
};

#endif /* ********************************************************** INTERN_H */