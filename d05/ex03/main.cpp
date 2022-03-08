/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:17:49 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/07 17:46:56 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	{
		Intern Bongo;
		Form *test = Bongo.makeForm("presidential pardon", "maison");
		Bongo.makeForm("wrong", "maison");
		delete test;	
	}
	
	{
		Intern someRandomIntern;
		Bureaucrat test("test", 10);
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(test);
		rrf->execute(test);
		delete rrf;
	}
}