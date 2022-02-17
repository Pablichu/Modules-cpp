/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:07:59 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/17 22:45:43 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	Bureaucrat	bob("Bob", 70);

	std::cout << " >> Hello and welcome to the ministry of consumption." << std::endl << " >> Today we have a new form we need to sign." << std::endl;
	std::cout << " >> " << bob.getName() << ", we have seen that this is too much work for someone like you." << std::endl
			  << "    So, we are hiring a new intern!" << std::endl;
	Intern	more_intern;
	std::cout << " >> Your new partner will help you about making form. Just sign them and try execute'em." << std::endl;

	//Form	*model1;= new ShrubberyCreationForm("Greta Thunberg");
	//Form	*model2;= new RobotomyRequestForm("Bob");
	//Form	*model3;= new PresidentialPardonForm("Obama Junior");
	std::cin.ignore();

	Form	*ptrF;
	std::string	target;
	std::string	command;
	std::cout << "[Intern]: Who is the target?" << std::endl;
	std::getline(std::cin, target);
	while(true)
	{
		std::cout << "[Intern]: Tell me what do you need:" << std::endl;
		std::getline(std::cin, command);
		if (command == "exit")
			break ;
		ptrF = more_intern.makeForm(command, target);
		std::cout << std::endl << std::string(30, '-') << std::endl;
		if (!ptrF)
			std::cout << "[Intern]: That's why I am here. You make mistakes " << bob.getName() << ", and I am here to stop you." << std::endl;
		else
		{
			std::cout << *ptrF << std::endl;
			signing(bob, *ptrF);
			std::cout << *ptrF << std::endl;
			executing(bob, *ptrF);
			delete ptrF;
		}
	}
	std::cout << " >> Okay, thats enought for today. See you tomorrow." << std::endl;
	return 0;
}
