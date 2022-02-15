/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:07:59 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/16 00:50:21 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	gradeUpdate(Bureaucrat &bob, bool up, int num)
{
	try
	{
		if (up)		
			for (int i = 0; i < num; i++)
				bob.gradeUp();
		else
			for (int i = 0; i < num; i++)
				bob.gradeDown();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

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
	gradeUpdate(bob, true, std::stoi(num));
	
	std::cout << "Well, it seems that you, "<< bob.getName() << ", are useless as fuck. So, how much do we downgrade you?" << std::endl;
	std::getline(std::cin, num);
	gradeUpdate(bob, false, std::stoi(num));

	return 0;
}
