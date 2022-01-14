/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:25:32 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/14 20:33:41 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string name)
{
	this->type = name;
}

const std::string*	Weapon::getType(void) const
{
	return (&this->type);
}
