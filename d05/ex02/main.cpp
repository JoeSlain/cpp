/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:17:49 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/25 13:21:37 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	PresidentialPardonForm Pardon("Balkani");
	ShrubberyCreationForm Shrub("Maison");
	RobotomyRequestForm Patient("Hubert");
	Bureaucrat worker("Carlos", 1);
	Bureaucrat worker2 ("Bob", 150);

	
	try
	{
		Pardon.beSigned(worker2);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() <<std::endl;
	}
	Pardon.beSigned(worker);
	//Shrub.beSigned(worker2);
	Shrub.beSigned(worker);
	//Patient.beSigned(worker2);
	Patient.beSigned(worker);
	try
	{
		worker2.executeForm(Pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	worker.executeForm(Pardon);
	worker.executeForm(Shrub);
	worker.executeForm(Patient);

}