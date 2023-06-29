/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:07:03 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/29 00:15:01 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please input one of the four log levels as argument:\n";
		std::cout << "DEBUG, INFO, WARNING or ERROR" << std::endl; 
		return (1);
	}
	
	std::string	input(argv[1]);
	Harl	harl;
	
	harl.complainParser(input);
	return (0);
}