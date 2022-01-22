/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:04:05 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 17:58:10 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;

public:
	Point(void);							//canonical
	Point(float const fx, float const fy);
	Point(Point const &src);				//canonical
	~Point(void);							//canonical

	Fixed	getx(void) const;
	Fixed	gety(void) const;

	Point	&operator=(Point const &rhs);	//canonical

	Point	operator-(Point const &rhs) const;
};
