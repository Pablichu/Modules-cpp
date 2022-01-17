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

#include "Contact.hpp"

Contact::Contact()
{
	this->_set = false;
}

Contact::~Contact() {}

static bool isNumber(const std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0)
			return false;
    return true;
}

bool	Contact::add_contact()
{
	std::cout << "Insert contact name > ";
	std::getline(std::cin, this->_name);
	std::cout << "Insert last name > ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Insert nickname > ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Insert phone number > ";
	std::getline(std::cin, this->_phone_nb);
	if (!isNumber(_phone_nb))
	{
		std::cout << std::endl << "Phone number must NOT contain anything than numbers. Try again -_-" << std::endl;
		return false;
	}
	std::cout << "Insert... their dark secret > ";
	std::getline(std::cin, this->_dark_secret);
	return (this->_set = true);
}

bool	Contact::setted()
{
	return(this->_set);
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
	print_info(this->_name, true);
	print_info(this->_last_name, true);
	print_info(this->_nickname, false);
	std::cout << std::endl;
}

void	Contact::show_everything()
{
	if (this->_set == false)
	{
		std::cout << "Contact not setted yet" << std::endl;
		return ;
	}
	std::cout << "Name        -> " << this->_name << std::endl;
	std::cout << "Last name   -> " << this->_last_name << std::endl;
	std::cout << "Nickname    -> " << this->_nickname << std::endl;
	std::cout << "Number      -> " << this->_phone_nb << std::endl;
	std::cout << "Dark secret -> " << this->_dark_secret << std::endl;
}
