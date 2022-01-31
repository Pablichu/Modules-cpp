/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/31 18:47:26 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

const int Fixed::_FBIT = 8;

Fixed::Fixed(void)
{
	std::cout << " > Default constructor called!" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << " > Integer constructor called!" << std::endl;
	this->_value = nb << _FBIT;
}

Fixed::Fixed(const float nb)
{
	std::cout << " > Float constructor called!" << std::endl;
	this->_value = roundf(nb * (1 << _FBIT));
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
		this->_value = rhs._value;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << " > Getting raw bits!" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << " > Setting raw bits!" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (((float)this->_value) / (1 << _FBIT));
}
int		Fixed::toInt(void) const
{
	return (this->_value >> _FBIT);
}

std::ostream &	operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}
