/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:07:59 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/14 22:48:42 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::string	name;
	std::string	num;

	std::cout << " >> Hello and welcome to the ministry of consumption." << std::endl << " >> What's your name?" << std::endl;
	std::getline(std::cin, name);
	std::cout << " >> What's your grade?" << std::endl;
	std::getline(std::cin, num);

	Bureaucrat	bob(name, std::stoi(num));
	std::cout << "You have work 'a lot'. How much do you want to ascend?" << std::endl;
	std::getline(std::cin, num);
	try
	{
		for (int i = 0; i < std::stoi(num); i++)
			bob.gradeUp();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Well, it seems that you, "<< bob.getName() << ", are useless as fuck. So, how much do we downgrade you?" << std::endl;
	std::getline(std::cin, num);
	try
	{
		for (int i = 0; i < std::stoi(num); i++)
			bob.gradeDown();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
