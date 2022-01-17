/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:24:28 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 21:11:00 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon &violence_tool) : _name(hname),
														  _my_gun(violence_tool)
{
	std::cout << "Hi, my name is " << this->_name
			  << " and I have a " << this->_my_gun.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "At least I die after fighting for my country..." << std::endl << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his "
			  << this->_my_gun.getType() << std::endl;
}
