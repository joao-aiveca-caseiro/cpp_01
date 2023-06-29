/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:07:03 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/29 02:32:24 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	
	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
}