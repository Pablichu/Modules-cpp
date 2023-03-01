/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:31 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/01 21:28:02 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << " >> No notation given so it has been setted to 0" << std::endl;
	this->_notat.push(0);
}

RPN::RPN(std::string const notation)
{
	size_t lenght = notation.length();
	for (size_t i = 0; i != lenght; i++)
		if (!isdigit(notation[i]) && strchr("+/-* ", notation[i]))
			throw " >> Invalid characters for a numeric notation";
	
	
}

RPN::RPN(RPN const &src)
{
	*this = src;
}

RPN::~RPN()
{

}

RPN &RPN::operator=(RPN const &src)
{
	if (this != &src)
		this->_notat = src._notat;
	return *this;
}
