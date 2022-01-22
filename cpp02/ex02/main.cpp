/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:09:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 16:29:23 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		 	a;
	Fixed const 	b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "1 > " << a << std::endl;
	std::cout << "2 > " << ++a << std::endl;
	std::cout << "3 > " << a << std::endl;
	std::cout << "4 > " << a++ << std::endl;
	std::cout << "5 > " << a << std::endl;
	
	std::cout << "B > " << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

