/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/24 17:28:15 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

const int Fixed::_FBIT = 8;

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int nb) : _value(nb << _FBIT) {}

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _FBIT))) {}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed(void) {}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	output;

	output.setRawBits(this->_value + rhs.getRawBits());
	return (output);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	output;

	output.setRawBits(this->_value - rhs.getRawBits());
	return (output);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}
Fixed	Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_value += 1;
	return (temp);
}
Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_value -= 1;
	return (temp);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}
