/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:17:49 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/23 21:06:11 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	Form formTest("fortest", 10);
	Bureaucrat BureauTest("JO", 1);

	BureauTest.signForm(formTest);
}