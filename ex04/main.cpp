/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:10:00 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/27 03:24:45 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter three arguments in the following order:\n"
					<< "- The name of the file you wish to parse;\n"
					<< "- The string on the selected file you wish to replace;\n"
					<< "- The new string, to replace the above one;\n" << std::endl;
	}
	else
	{
		std::ifstream	infile;
		std::ofstream	outfile;
		std::string		filename(argv[1]);
		std::string		line;
		std::string		edited;

		infile.open(argv[1]);
		if (!infile)
		{
			std::cout << "Error: the file does not exist or can't be opened." << std::endl;
			return (1);
		}
		outfile.open(filename.append(".replace").c_str());
		while (getline(infile, line))
		{
			std::cout << "HELLO\n"; 
		}
	}
	return (0);
}