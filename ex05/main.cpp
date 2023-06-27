/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:07:03 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/27 18:00:21 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::cout << "Harl will now show his DEBUG message:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Harl will now show his INFO message:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "Harl will now show his WARNING message:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Harl will now show his ERROR message:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
}