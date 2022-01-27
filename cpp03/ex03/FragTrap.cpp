/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:40:00 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/27 20:15:06 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	*this = FragTrap("generic trap");
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Frag trap is now operative." << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src)
{
	this->_name = src.get_name();
	this->_hitpoints = src.get_hitpoints();
	this->_energy_points = src.get_energy();
	this->_attack_damage = src.get_attackdm();
}

FragTrap::~FragTrap()
{
	std::cout << "A frag trap did his job. " << this->_name << ", we'll remember you." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
		this->_name = src.get_name();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " asks to gently high five! Do you accept?" << std::endl;
}
