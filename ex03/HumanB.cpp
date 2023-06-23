/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:54:27 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/23 19:05:24 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_bName = name;
	this->_bWeapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_bWeapon = &weapon; 
}

void	HumanB::attack(void)
{
	if (this->_bWeapon)
		std::cout << this->_bName << " attacks with their " << this->_bWeapon->getType() << std::endl;
	else
		std::cout << this->_bName << " has no weapon, they attack with the power of friendship!" << std::endl;
}