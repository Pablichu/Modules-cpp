/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:25:03 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 02:04:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") {}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure::~Cure(void) {}

Cure	&Cure::operator=(Cure const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const &Cure::getType() const
{
	return this->_type;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}
