#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();

		void action() const;
		virtual void execute (Bureaucrat const & executor) const;
		virtual std::string getTarget();
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		std::string _target;
		

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */