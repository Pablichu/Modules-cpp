/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:41:06 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/31 19:38:13 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string	bro("Paco");
	std::string	homie("Javi");

	std::cout << "Sugar, spice, and everything nice. These were the ingredients chosen " << std::endl
			  << "To create the perfect trap. But Professor " << homie << " accidentally added an extra ingredient" << std::endl
			  << "to the concotion -- Diamond X" << std::endl
			  << "The perfect trap to defeat " << bro << " was ready. It was like a diamond..." << std::endl;

	std::cin.ignore();
	DiamondTrap	perfection("the giant enemy spider");
	perfection.whoAmI();

	std::cin.ignore();
	perfection.attack(bro);
	std::cout << "This time " << bro << " gave up and he went to KFC." << std::endl;

	std::cin.ignore();
	std::cout << homie << " won this battle but not the war." << std::endl;

	std::cout << std::endl << "Before destructors, let's check the values:" << std::endl
			  << perfection << std::endl;
}
