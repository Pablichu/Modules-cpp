/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/21 23:54:36 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_FBIT = 8;

Fixed::Fixed(void)
{
	std::cout << " > Default constructor called!" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << " > Copy constructor called!" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << " > Destructor called!" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << " > Assignation operator called!" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << " > Getting raw bits!" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << " > Setting raw bits!" << std::endl;
	this->_value = raw;
}
