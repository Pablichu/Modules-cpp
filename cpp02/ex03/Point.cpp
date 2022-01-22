/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:06:40 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 19:48:51 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float const fx, float const fy) : _x(fx), _y(fy) {}

Point::Point(Point const &src)
{
	*this = src;
}

Point::~Point(void) {}

Fixed	Point::getx(void) const
{
	return (this->_x);
}

Fixed	Point::gety(void) const
{
	return (this->_y);
}

Point	&Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs.getx();
		this->_y = rhs.gety();
	}
	return (*this);
}

Point	Point::operator-(Point const &rhs) const
{
	return (Point((this->_x - rhs.getx()).toFloat(), (this->_y - rhs.gety()).toFloat()));
}
