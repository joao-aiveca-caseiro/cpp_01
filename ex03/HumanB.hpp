/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:54:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/23 19:02:41 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{
	public:
	
		HumanB(std::string name);
		
		void	setWeapon(Weapon &weapon);
		void	attack(void);

	private:

		std::string	_bName;
		Weapon		*_bWeapon;
};

#endif