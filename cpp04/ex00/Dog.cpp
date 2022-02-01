/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:04:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/01 19:38:01 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Doggo comming in!" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << "It is time to make 5000 spins to make my bed comfortable." << std::endl;
}

Dog	&Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << " ' WHO LET THE DOGS OUT? ' *proceeds to jump through the stairs*" << std::endl;
}
