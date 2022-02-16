/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:19:56 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/16 21:57:06 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _target("Afganistan"), Form("Model 720", 72, 45)
{
	std::cout << "Presidential Pardon form has been created by standart properties." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : _target(target), Form("Model 720", 72, 45)
{
	std::cout << "Presidential Pardon form has been created for " << this->_target << "." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << " * Your president form has been keeped in a safe box *" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : _target(src._target)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

void	RobotomyRequestForm::proceed() const
{
	std::cout << std::endl << "Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝ mis brazos Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝ mis piernas Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝" << std::endl
			  << this->_target << " has been robotomized succesfully 50%." << std::endl;
}
