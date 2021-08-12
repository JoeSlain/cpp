/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:37:26 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/11 20:20:12 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>	

int main(int argc, char *argv[])
{
	std::string s1, s2, filename, tmp;
	size_t pos = 0;


	if (argc < 4)
		return (-1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
		return (-2);
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");
	while (!ifs.eof())
	{
		ifs >> tmp;
		pos = tmp.find(s1);
		if (pos != std::string::npos)
		{
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);
		}
		ofs << tmp << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}