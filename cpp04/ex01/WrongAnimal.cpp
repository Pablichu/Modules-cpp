/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:51:54 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/01 19:24:05 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	WrongAnimal("WrongAnimal not identified");
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "New WrongAnimal! Born to shit." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Forced to wipe." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " ' JJJJJJ no soy un WrongAnimal JJJJJ' *Loquendo making strange sounds*" << std::endl;
}
