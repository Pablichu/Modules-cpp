/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:08:00 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/30 20:41:52 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	*this = ScavTrap("no_name");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _keeper_mode(false)
{
	std::cout << "Scav trap has been setted!" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->_name = src.get_name();
	this->_hitpoints = src.get_hitpoints();
	this->_energy_points = src.get_energy();
	this->_attack_damage = src.get_attackdm();
}

ScavTrap::~ScavTrap()
{
	std::cout << "A scav trap has been compromised so now it is in the garbage." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		this->_name = src.get_name();
	}
	return *this;
}

void	ScavTrap::guardGate(void)
{
	if (!this->_keeper_mode)
	{
		std::cout << this->_name << " has entered in guard keeper mode." << std::endl;
		this->_keeper_mode = true;
	}
	else
		std::cout << this->_name << " is already in guard keeper mode." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, ScavTrap const &src)
{
	out << "ScavTrap>>Name:" << src.get_name() << "|Hitpoint:" << src.get_hitpoints()
		<< "|En_attack:" << src.get_energy() << "|Attack_dm:" << src.get_attackdm() << std::endl;
	return out;
}
