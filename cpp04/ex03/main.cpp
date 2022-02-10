/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:44:53 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 21:02:17 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* main_char = new Character();

	AMateria* tmp;
	tmp = src->createMateria("ice");
	main_char->equip(tmp);
	tmp = src->createMateria("cure");
	main_char->equip(tmp);

	ICharacter* Bob = new Character("Pepe Gotera");

	main_char->use(0, *Bob);
	main_char->use(1, *Bob);
	std::cin.ignore();

	ICharacter* robot = new Character("Big Shin-Ra robot");
	tmp = src->createMateria("cure");
	Bob->equip(tmp);

	std::cout << std::endl << std::string(25, '-');
	std::cout << std::endl << std::endl;
	std::cout << "\tIt was a normal day in Midgar." << main_char->getName() << " were going to the market but" << std::endl
			  << "\ta big robot appears. It was send by Shin-Ra to neutralize " << main_char->getName() << "."  << std::endl;
	std::cout << std::endl << std::string(25, '-') << std::endl;
	std::cin.ignore();

	std::cout << "[" << robot->getName() << "] Punch dealing 25hp to " << main_char->getName() << "."  << std::endl;
	std::cout << "[" << main_char->getName() << "] ";
	main_char->use(0, *main_char);
	std::cin.ignore();

	std::cout << "[" << robot->getName() << "] Fire missiles dealing 25hp to " << main_char->getName() << "."  << std::endl;
	std::cout << main_char->getName() << " was very low health..." << std::endl;
	std::cin.ignore();

	std::cout << "[" << Bob->getName() << "] ";
	Bob->use(0, *main_char);
	std::cout << " ->" << Bob->getName() << ": keep up " <<  main_char->getName() << "!" << std::endl;
	std::cout << "[" << main_char->getName() << "] ";
	main_char->use(0, *main_char);
	std::cin.ignore();

	std::cout << "Tututututuuuu " << robot->getName() << " has been defeated! " << main_char->getName() << " gains 75xp" << std::endl
			  << "Winner winner chicken dinner!! Now put me outstanding project please :D" << std::endl;
	std::cout << std::string(25, '-') << std::endl;

	delete Bob;
	delete main_char;
	delete robot;
	delete src;

	return 0;
}
