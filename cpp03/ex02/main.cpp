/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:41:06 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/27 21:07:15 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a_trap("rat trap");
	ScavTrap	b_trap("bucket full of water up of door");
	std::string	bro("Paco");
	std::string	homie("Javi");

	std::cout << "When there is a war. Both sides try to develop new dangerous methods" << std::endl
			  << "to have a definetly victory. " << bro << " took a broomstick (+25dm)." << std::endl
			  << homie << " instead developed a new trap!" << std::endl;

	std::cin.ignore();
	FragTrap	bigger("piano on the roof");
	bigger.highFivesGuys();
	std::cout << homie << " really likes his new trap that he add a function to ask for high five!" << std::endl;

	std::cin.ignore();
	bigger.attack(bro);
	std::cout << bro << " do not hesitate!" << std::endl;
	bigger.takeDamege(50);

	std::cin.ignore();
	std::cout << "This time " << bro << " was going serious" << std::endl;
	bigger.beRepaired(17);
	std::cout << homie << " has to go harder this time. Maybe The Trap..." << std::endl;
}
