/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:10:00 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/29 02:29:33 by jaiveca-         ###   ########.fr       */
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
		std::string		s1(argv[2]);
		std::string		s2(argv[3]);
		std::string		line;
		int				pos;

		infile.open(argv[1]);
		if (!infile)
		{
			std::cout << "Error: the file does not exist or can't be opened." << std::endl;
			return (1);
		}
		
		outfile.open(filename.append(".replace").c_str());
		
		getline(infile, line);
		while (1)
		{
			pos = line.find(argv[2]);
			while (pos != -1)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos = line.find(argv[2], pos + 1);
				if (pos == -1)
					break ;
			}
			outfile << line;
			if (!getline(infile, line))
				break ;
			outfile << std::endl;
		}
		infile.close();
		outfile.close();
	}
	return (0);
}