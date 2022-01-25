/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:59:14 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/25 16:17:45 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no_name"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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
