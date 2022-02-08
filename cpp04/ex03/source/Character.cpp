/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 02:12:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 02:22:40 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Cloud")
{
	std::cout << "Standart constructor." << std::endl;
}

Character::Character(std::string name) : _name("Cloud") {}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void) {}

Character	&Character::operator=(Character const &src)
{
	if (this != &src)

	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{

}
void Character::unequip(int idx)
{

}
void Character::use(int idx, ICharacter& target)
{

}
