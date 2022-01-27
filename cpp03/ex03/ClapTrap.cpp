/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:59:14 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/25 20:40:40 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no_name"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "A trap was setted by someone." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A trap is fucked up so it was throw away." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
		this->_name = src.get_name();
	return *this;
}

std::string		ClapTrap::get_name(void) const
{
	return this->_name;
}

unsigned		ClapTrap::get_hitpoints(void) const
{
	return this->_hitpoints;
}

unsigned		ClapTrap::get_energy(void) const
{
	return this->_energy_points;
}

unsigned		ClapTrap::get_attackdm(void) const
{
	return this->_attack_damage;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "Enemy " << this->_name << " attack " << target << ". Damage: " << this->_attack_damage << std::endl;
}

void	ClapTrap::takeDamege(unsigned int amount)
{
	std::cout << "Clap trap " << this->_name << " recieve " << amount << " damage" << std::endl;
	this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Clap trap " << this->_name << " was repaired gaining " << amount << " " << std::endl;
	this->_hitpoints += amount;
}
