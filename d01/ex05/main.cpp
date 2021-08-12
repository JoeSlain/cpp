/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:27:37 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/12 15:27:30 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;
	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	
	karen.complain("random");
	karen.complain("random");
	karen.complain("random");
	
	return 0;
	
}