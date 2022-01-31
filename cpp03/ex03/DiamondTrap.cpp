/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:01:04 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/31 21:17:24 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	DiamondTrap("bright piece of glass");
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << " > This time this is serious. A diamond trap has been setted!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << " > Diamond trap finished his work! Time to get going." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->ScavTrap::_name = src.ScavTrap::get_name();
		this->FragTrap::_name = src.FragTrap::get_name();
		this->FragTrap::_hitpoints = src.FragTrap::get_hitpoints();
		this->ScavTrap::_energy_points = src.ScavTrap::get_energy();
		this->FragTrap::_attack_damage = src.FragTrap::get_attackdm();
	}
	return *this;
}

void		DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI()
{
	std::cout << " > So you are asking about me, aren't you? Well, I am " << this->_name << "." << std::endl
			  << "   But you could also know me as " << this->ScavTrap::get_name() << std::endl;
}

std::string	DiamondTrap::get_name() const
{
	return this->_name;
}

std::ostream	&operator<<(std::ostream &out, DiamondTrap const &src)
{
	out << "DiamondTrap>>Name:" << src.get_name() << "|Clap_Name:" << src.ScavTrap::get_name() << "|Hitpoint:" << src.FragTrap::get_hitpoints()
		<< "|En_attack:" << src.ScavTrap::get_energy() << "|Attack_dm:" << src.ScavTrap::get_attackdm() << std::endl;
	return out;
}
