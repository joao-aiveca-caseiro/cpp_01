/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:54:36 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/23 15:45:38 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
	this->setType(newtype);
}

const std::string &Weapon::getType(void)
{
	std::string	&ref = this->_type;
	return (ref);
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}