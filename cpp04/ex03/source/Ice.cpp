/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:25:03 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 02:04:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice(void) {}

Ice	&Ice::operator=(Ice const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}
