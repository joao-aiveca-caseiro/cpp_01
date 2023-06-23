/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:54:21 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/23 17:20:39 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _aWeapon(weapon)
{
	this->_aName = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_aName << " attacks with their " << this->_aWeapon.getType() << std::endl;
}