/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:07:59 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/16 00:55:38 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int	main()
{
	Bureaucrat	bob("Bob", 75);

	std::cout << " >> Hello and welcome to the ministry of consumption." << std::endl << " >> Today we have a new form we need to sign." << std::endl;
	std::cout << " >> " << bob.getName() << " go sign as much forms as you can." << std::endl;

	Form		model1;
	Form		model2("Model 720", 45, 120);
	Form		model3("Model 135", 100, 145);

	std::cout << std::endl << model1 << std::endl << model2 << std::endl << model3 << std::endl;

	signing(bob, model1);
	std::cout << " >> You have work 'a lot'. We will ascend you 25." << std::endl;
	gradeUpdate(bob, true, 25);

	signing(bob, model2);
	std::cout << std::endl << " >> Well, it seems that you, "<< bob.getName() << ", are useless as fuck. So, we'll downgrade you 45." << std::endl;
	gradeUpdate(bob, false, 45);

	signing(bob, model3);
	
	std::cout << std::endl << model1 << std::endl << model2 << std::endl << model3 << std::endl;
	std::cout << " >> Okay, thats enought for today. See you tomorrow." << std::endl;
	return 0;
}
