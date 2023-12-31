/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:54:24 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/23 18:50:40 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	public:
	
		HumanA(std::string name, Weapon &weapon);
		
		void	attack(void);

	private:

		std::string	_aName;
		Weapon		&_aWeapon;
};

#endif