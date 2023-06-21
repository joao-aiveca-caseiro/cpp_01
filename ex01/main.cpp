/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:42:17 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/21 19:19:28 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = zombieHorde(5, "Carlos");
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "(zombie " << i << ") "; 
		z[i].announce();
	}
	delete[] z;
}