/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:56:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 18:43:07 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << " -> Nothing should never reach this point. Delete this inmediatly." << std::endl;
}

AMateria::AMateria(std::string const & type) :  _type(type) {}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " recieve a ball hit in the head." << std::endl;
}
