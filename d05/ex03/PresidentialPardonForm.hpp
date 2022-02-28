#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();


		void action() const;
		virtual void execute (Bureaucrat const & executor) const;
		virtual std::string getTarget();
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		std::string _target;
		
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */