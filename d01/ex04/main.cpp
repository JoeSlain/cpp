/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:37:26 by jcueille          #+#    #+#             */
/*   Updated: 2022/02/18 13:39:32 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>	
#include <cstring>

int main(int argc, char *argv[])
{
	std::string s1, s2, tmp;
	char	filename[1024];
	size_t pos = 0;


	if (argc < 4 || strlen(argv[1]) > 1016)
		return (-1);
	strcpy(filename, argv[1]);
	strcat(filename, ".replace");
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
		return (-2);
	std::ifstream ifs(argv[1], std::ifstream::in);
	std::ofstream ofs(filename);
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