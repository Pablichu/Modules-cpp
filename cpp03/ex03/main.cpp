/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:41:06 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/25 20:45:49 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a_trap("rat trap");
	ClapTrap	a_big_trap("electrocutter");
	std::string	bro("Paco");
	std::string	homie("Javi");

	std::cout << "The clap traps were not enought to stop " << bro << " from getting dinner."  << std::endl
			  << homie << " has made a deccision." << std::endl;

	std::cin.ignore();
	std::cout << "But " << bro << " kept attacking this traps so..." << std::endl;
	ScavTrap	bigger("bucket up of door");
	std::cout << homie << " strikes back for blood!" << std::endl;

	std::cin.ignore();
	bigger.guardGate();
	bigger.attack(bro);
	std::cout << "This trap was much worst than the last ones. " << bro << " was having a bad time." << std::endl;
	bigger.takeDamege(25);

	std::cin.ignore();
	std::cout << homie << " was suprised that " << bro << " didn't get the message. Now " << homie << " is in a war!" << std::endl;
	bigger.beRepaired(17);
}
