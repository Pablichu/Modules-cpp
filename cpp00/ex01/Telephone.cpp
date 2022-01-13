/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Telephone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:09:56 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 18:12:45 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Telephone.hpp"

Telephone::Telephone()
{
	this->_pos = 0;
}

Telephone::~Telephone() {}

void	Telephone::add_contact()
{
	contacts[this->_pos].add_contact();
	this->_pos++;
	if (this->_pos == 8)
		this->_pos = 0;
}

bool isNumber(const std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0)
			return false;
    return true;
}

void	Telephone::show_contacts()
{
	std::string	who;
	int	pos;

	std::cout << std::setw(10) << "Index" << "|First name| Last name|  Nickname" << std::endl;  
	for (size_t i = 0; i < 8 && contacts[i].setted(); i++)
		contacts[i].show_contact(i);
	std::cout << "From whom you want the info? Tell me index!" << std::endl << "> ";
	std::getline(std::cin, who);
	if (!isNumber(who))
	{
		std::cout << "Not valid entry >:(" << std::endl;
		return ;
	}
	pos = std::stoi(who);
	if (pos < 1 || pos > 8)
	{
		std::cout << "Not in the memory range" << std::endl;
		return ;
	}
	contacts[pos - 1].show_everything();
}
