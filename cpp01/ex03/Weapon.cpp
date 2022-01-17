/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:25:32 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 21:02:29 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name), typeREF(type){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string name)
{
	this->type = name;
}

std::string const&	Weapon::getType(void)
{
	return this->typeREF;
}
