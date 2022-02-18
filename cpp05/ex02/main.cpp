/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:07:59 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/18 17:39:52 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << bob << std::endl;
}

void	signing(Bureaucrat &bob, Form &subject)
{
	try
	{
		subject.beSigned(bob);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	executing(Bureaucrat &bob, Form &subject)
{
	try
	{
		subject.execute(bob);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int	main()
{
	Bureaucrat	bob("Bob", 30);

	std::cout << " >> Hello and welcome to the ministry of consumption." << std::endl << " >> Today we have a new form we need to sign." << std::endl;
	std::cout << " >> " << bob.getName() << " go sign and execute as much forms as you can." << std::endl << std::endl;

	Form	*model1 = new ShrubberyCreationForm("Greta Thunberg");
	Form	*model2 = new RobotomyRequestForm("Bob");
	Form	*model3 = new PresidentialPardonForm("Obama Junior");

	std::cout << std::endl << *model1 << std::endl << *model2 << std::endl << *model3 << std::endl;
	std::cout << "Are you ready, " << bob.getName() << "?" << std::endl;
	std::cin.ignore();

	signing(bob, *model1);
	//signing(bob, *model2);
	signing(bob, *model3);
	std::cout << std::endl << *model1 << std::endl << *model2 << std::endl << *model3 << std::endl;
	std::cin.ignore();

	std::cout << std::endl << bob.getName() << " says: 'Time to execute'" << std::endl;
	executing(bob, *model1);
	executing(bob, *model2);
	executing(bob, *model3);
	std::cout << std::endl << " >> It seems that you, " << bob.getName() << ", cannot execute every form. So we'll summond Super Bob" << std::endl;
	std::cin.ignore();

	Bureaucrat	Superbob("Super Bob", 10);
	signing(Superbob, *model3);
	std::cout << std::endl << *model1 << std::endl << *model2 << std::endl << *model3 << std::endl;
	std::cin.ignore();
	executing(Superbob, *model2);
	executing(Superbob, *model3);
	delete(model1);
	delete(model2);
	delete(model3);
	std::cout << " >> Okay, thats enought for today. See you tomorrow." << std::endl;
	return 0;
}
