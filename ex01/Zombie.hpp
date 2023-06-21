/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:42:29 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/21 19:05:32 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:

		Zombie();
		~Zombie();
		
		void	announce(void);
		void	setName(std::string name);
	
	private:
	
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif