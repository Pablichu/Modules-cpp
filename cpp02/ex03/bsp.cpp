/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:15:38 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 20:48:08 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(Point p1, Point p2, Point p3)
{
    return (p1.getx() - p3.getx()) * (p2.gety() - p3.gety()) - (p2.getx() - p3.getx()) * (p1.gety() - p3.gety());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed	d1(sign(point, a, b));
	Fixed	d2(sign(point, b, c));
	Fixed	d3(sign(point, c, a));
    bool has_neg, has_pos;

    has_neg = (d1 < Fixed()) || (d2 < Fixed()) || (d3 < Fixed());
    has_pos = (d1 > Fixed()) || (d2 > Fixed()) || (d3 > Fixed());

    return !(has_neg && has_pos);
}

/*const Fixed	calcW1(Point const a, Point const e, Point const d, Point const point)
{
	const Fixed		part1(e.getx() * (a.gety() + point.gety()) + (e.gety() * (point.getx() - a.getx())));
	const Fixed		part2((d.getx() * e.gety()) - (d.gety() * e.getx()));

	//std::cout << "W1" << std::endl;
	//std::cout << e.getx().toFloat() << "|||" << (e.getx() * (a.gety() + point.gety())).toFloat() << std::endl;
	//std::cout << "1 -> " << part1 << "  2 -> " << part2 << std::endl;
	return (part1 / part2);
}

const Fixed	calcW2(Point const a, Point const e, Point const d, Point const point, Fixed const w1)
{
	const Fixed		w2((point.gety() - a.gety() - (w1 * d.gety())) / e.gety());

	std::cout << "W2" << std::endl;
	std::cout << "-> " << w2 << std::endl;
	return (w2);
}*/

/*	const Point		d(b - a);
	const Point		e(c - a);
	const Fixed		w1(calcW1(a, e, d, point));
	const Fixed		w2(calcW2(a, e, d, point, w1));

	if (w1.toFloat() > 0.0f && w2.toFloat() > 0.0f && (w1 + w2).toFloat() < 1.0f)
		return true;
	std::cout << std::endl << w1.toFloat() << "  " << w2.toFloat() << std::endl;
	return false;
*/

/*
	We need to calculate:
		-> D = B - A
		-> E = C - A

	Then:
		-> W1 = (Ex(Ay + Py) + Ey(Px - Ax)) / DxEy - DyEx
		-> W2 = (1 / Ey)(PY - Ay - W1Dy)

	The conditions must be:
		-> W1 >= 0
		-> W2 >= 0
		-> W1 + W2 <= 1
*/
