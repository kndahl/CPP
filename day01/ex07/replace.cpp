/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:41:12 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/25 18:04:13 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string file, std::string s1, std::string s2)
{
	std::ifstream	instream(file.c_str());							//Read file
	std::string		filename = std::string() + file + ".raplace";	//creating file name
	std::ofstream	outstream(filename.c_str());					//Creating new file
	std::string		line;

	if (!instream || !outstream) { std::cerr << "Failure occurred while reading or opening the file!" << std::endl; return ; }
	while (std::getline(instream, line))
	{
		int		found = line.find(s1);
		while (found != std::string::npos)
		{
			line.replace(found, s1.length(), s2);
			found = line.find(s1, found + s2.length());
		}
		outstream << line;
		if (!instream.eof()) { outstream << std::endl; }
	}
}

int		main(int argc, char **argv)
{
	if (argc != 4) { std::cerr << "Wrong number of arguments!" << std::endl; return (1); }
	else { replace(argv[1], argv[2], argv[3]); }
	return (0);
}