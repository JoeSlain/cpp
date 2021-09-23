#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>  
# include ""
class  ShrubberyCreationForm : public Form
{

	public:

		 ShrubberyCreationForm();
		 ShrubberyCreationForm(  ShrubberyCreationForm const & src );
		~ ShrubberyCreationForm();

		 ShrubberyCreationForm &		operator=(  ShrubberyCreationForm const & rhs );

	private:
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o,  ShrubberyCreationForm const & i );

#endif /* ******************************************  SHRUBBERYCREATIONFORM_H */