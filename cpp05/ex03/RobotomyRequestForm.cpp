/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:19:56 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/17 21:24:56 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Model 720", 72, 45), _target("Office Cleaner")
{
	std::cout << "Robotomy form has been created by standart properties." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Model 720", 72, 45), _target(target)
{
	std::cout << "Robotomy form has been created for " << this->_target << "." << std::endl;
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
	std::cout << std::endl << "Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝ my arms Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝ my legs Ā̸̛̹̭̏̋̅̚Ä̶͈̪͉̜À̵̼̓͠Ã̵̹͇͙̬̝́́Ä̸̛̜̠̥́͒̌͒͐Á̶̪̟̜̲̣̀Ä̷͎̤̥̓͊͋H̵͖͔͚̽̉͝" << std::endl
			  << this->_target << " has been robotomized succesfully 50%." << std::endl;
}
