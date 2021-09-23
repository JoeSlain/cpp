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
		ShrubberyCreationForm:: ShrubberyCreationForm(std::string target);
		virtual ~ ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=(  ShrubberyCreationForm const & rhs );

	private:
		std::string _target;
		std::string 

};

std::ostream &			operator<<( std::ostream & o,  ShrubberyCreationForm const & i );

#endif /* ******************************************  SHRUBBERYCREATIONFORM_H */