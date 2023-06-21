/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:42:29 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/21 18:46:50 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie();
		
		void	announce(void);
	
	private:
	
		std::string	_name;
};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif