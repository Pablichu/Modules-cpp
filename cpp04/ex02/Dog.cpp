/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:04:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 22:01:17 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _cabesa(new Brain())
{
	std::cout << "Doggo comming in!" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog::~Dog()
{
	delete(this->_cabesa);
	std::cout << "It is time to make 5000 spins to make my bed comfortable." << std::endl;
}

Dog	&Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_cabesa = src._cabesa->clone();
	}
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << " ' WHO LET THE DOGS OUT? ' *proceeds to jump through the stairs*" << std::endl;
}
