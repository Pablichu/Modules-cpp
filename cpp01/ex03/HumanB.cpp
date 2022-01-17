/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:38:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 21:09:48 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hname) : _name(hname),
									_my_gun(NULL)
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
	if (this->_my_gun == NULL)
		std::cout << this->_name << " attacks with NOTHING!" << std::endl;
	else
		std::cout << this->_name << " attacks with his "
				  << this->_my_gun->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &violence_tool)
{
	this->_my_gun = &violence_tool;
}
