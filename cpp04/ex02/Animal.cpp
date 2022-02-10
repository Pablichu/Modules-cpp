/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:51:54 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 20:04:15 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal_not_identified")
{
	std::cout << "Preset animal! Born to shit." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "New animal! Born to shit." << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Forced to wipe." << std::endl;
}

Animal	&Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << " ' JJJJJJ no soy un animal JJJJJ' *Loquendo making strange sounds*" << std::endl;
}
