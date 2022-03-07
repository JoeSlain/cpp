/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:17:49 by jcueille          #+#    #+#             */
/*   Updated: 2022/03/07 15:36:51 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	Form formTest("okTtest", 10, 10);
	Form formTest2("wrongTest", 1, 1);
	Bureaucrat BureauTest("Jo", 5);
	
	std::cout << formTest << std::endl;
	BureauTest.signForm(formTest);
	BureauTest.signForm(formTest2);
}