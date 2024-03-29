#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>  
# include "Form.hpp"

class  ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(  ShrubberyCreationForm const & src );
		ShrubberyCreationForm(std::string target);
		virtual ~ ShrubberyCreationForm();

		void action() const;
		virtual void execute (Bureaucrat const & executor) const;
		virtual std::string getTarget();
		ShrubberyCreationForm &		operator=(  ShrubberyCreationForm const & rhs );

	private:
		std::string _target;
		

};

std::ostream &			operator<<( std::ostream & o,  ShrubberyCreationForm & i );

#endif /* ******************************************  SHRUBBERYCREATIONFORM_H */