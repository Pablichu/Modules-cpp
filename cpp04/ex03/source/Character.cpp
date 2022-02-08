/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 02:12:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 17:22:54 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Standart constructor." << std::endl;
	Character("Cloud");
}

Character::Character(std::string name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		my_bag[i].setted = false;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
		if (my_bag[i].setted)
			delete(my_bag[i].materia);
}

Character	&Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (size_t i = 0; i < BAG_SIZE; i++)
		{
			my_bag[i].materia = src.my_bag[i].materia->clone();
			my_bag[i].setted = my_bag[i].setted;
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
		if (!my_bag[i].setted)
		{
			my_bag[i].setted = true;
			my_bag[i].materia = m;
			return ;
		}

	std::cout << " -> No slots availible in the bag." << std::endl;
}

void Character::unequip(int idx)
{
	if (!my_bag[idx].setted)
	{
		std::cout << " -> There is no materia in this slot." << std::endl;
		return ;
	}
	
	std::cout << "Materia " << my_bag[idx].materia->getType() << " of " << idx << " slot was unequiped " << std::endl;
	my_bag[idx].materia = NULL;
	my_bag[idx].setted = false;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << " -> Not valid bag index." << std::endl;
		return ;
	}
	if (!my_bag[idx].setted)
	{
		std::cout << " -> Materia is not equipped." << std::endl;
		return ;
	}

	my_bag[idx].materia->use(target);
}
