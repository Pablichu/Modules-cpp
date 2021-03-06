/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:41:06 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/31 20:52:16 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a_trap("rat trap");
	ClapTrap	a_big_trap("electrocuter");
	std::string	bro("Paco");
	std::string	house_partner("Javi");

	std::cout << bro << " were going to the kitchen to have some pizza. But suddenly..." << std::endl;
	std::cin.ignore();
	a_trap.attack(bro);
	a_big_trap.attack(bro);

	std::cin.ignore();
	std::cout << bro << " is upset so he strikes back!" << std::endl;
	a_trap.takeDamege(7);
	a_big_trap.takeDamege(4);

	std::cin.ignore();
	std::cout << "But all this traps belongs to " << house_partner << " and after " << bro
			  << " mess, he decides to repair his traps." << std::endl;
	a_trap.beRepaired(5);
	a_big_trap.beRepaired(2);

	std::cout << std::endl << "Before destructors, let's check the values:" << std::endl
			  << a_trap << a_big_trap << std::endl;
}
