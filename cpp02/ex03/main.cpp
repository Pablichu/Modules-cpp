/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:09:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/24 17:49:23 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

bool	isNumber(const std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0 && str[i] != '-')
			return false;
    return true;
}

void	yes_or_no(bool what_happened)
{
	if (what_happened)
		std::cout << "The point is actually inside triangule!" << std::endl;
	else
		std::cout << "The point is not inside triangule" << std::endl;
}

int main(int ar, char **argv)
{
	Point		a(0, 0);
	Point		b(2, 0);
	Point		c(1, 2);
	Point		point(1.45, 1);

	std::cout << "Point a -> " << a << std::endl
			  << "Point b -> " << b << std::endl
			  << "Point c -> " << c << std::endl
			  << "Point p -> " << point << std::endl;
	yes_or_no(bsp(a, b, c, point));

	std::cout << std::endl;
	a = Point(-1.5, -0.5);
	b = Point(2, 0);
	c = Point(-0.5, 2.3);
	point = Point(0, 0);
	
	std::cout << "Point a -> " << a << std::endl
			  << "Point b -> " << b << std::endl
			  << "Point c -> " << c << std::endl
			  << "Point p -> " << point << std::endl;
	yes_or_no(bsp(a, b, c, point));

	std::cout << std::endl;
	a = Point(0, 0);
	b = Point(2, 0);
	c = Point(0, 2);
	point = Point(0, 2);

	std::cout << "Point a -> " << a << std::endl
			  << "Point b -> " << b << std::endl
			  << "Point c -> " << c << std::endl
			  << "Point p -> " << point << std::endl;
	yes_or_no(bsp(a, b, c, point));

	return 0;
}

