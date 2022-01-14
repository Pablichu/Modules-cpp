/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:38:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/14 20:50:30 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hname) : _name(hname)
{
	std::cout << "Well, I am " << this->_name
			  << ". What about it? Hu?" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "I guess I'll die..." << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his "
			  << *this->_my_gun << std::endl;
}

void	HumanB::setWeapon(Weapon violence_tool)
{
	this->_my_gun = violence_tool.getType();
}
