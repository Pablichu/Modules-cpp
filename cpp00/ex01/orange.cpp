/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orange.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 21:52:33 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/04 21:52:33 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "telephone.hpp"

Contact::Contact()
{
	this->set = false;
}

Contact::~Contact() {}

void	Contact::add_contact()
{
	std::cout << "Insert contact name: " << std::endl << "> ";
	std::getline(std::cin, this->name);
	std::cout << "Insert last name: " << std::endl << "> ";
	std::getline(std::cin, this->last_name);
	std::cout << "Insert nickname: " << std::endl << "> ";
	std::getline(std::cin, this->nickname);
	std::cout << "Insert phone number: " << std::endl << "> ";
	std::getline(std::cin, this->phone_nb);
	std::cout << "Insert... his/her dark secret... " << std::endl << "> ";
	std::getline(std::cin, this->dark_secret);
	this->set = true;
}

bool	Contact::setted()
{
	return(this->set);
}

void	print_info(std::string data, bool pipe)
{
	if (data.length() > 10)
		std::cout << data.substr(0, 8) << "..";
	else
		std::cout << std::setw(10) << data;
	if (pipe)
		std::cout << "|";
}

void	Contact::show_contact(int i)
{
	std::cout << std::setw(10) << i + 1 << "|";
	print_info(this->name, true);
	print_info(this->last_name, true);
	print_info(this->nickname, false);
	std::cout << std::endl;
}

void	Contact::show_everything()
{
	if (this->set == false)
	{
		std::cout << "Contact not setted yet" << std::endl;
		return ;
	}
	std::cout << "Name -> " << this->name << std::endl;
	std::cout << "Last name ->" << this->last_name << std::endl;
	std::cout << "Nickname -> " << this->nickname << std::endl;
	std::cout << "Number -> " << this->phone_nb << std::endl;
	std::cout << "Dark secret -> " << this->dark_secret << std::endl;
}
