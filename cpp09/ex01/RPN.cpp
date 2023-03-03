/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:31 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/04 00:16:48 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << " >> RPN Up & ready" << std::endl;
}

RPN::RPN(std::string const notation)
{
	this->_notationChecker(notation);
	this->_calculateRPN(notation);
	
}

void	RPN::newCalculation(std::string const notation)
{
	this->_notationChecker(notation);
	this->_calculateRPN(notation);
}

RPN::RPN(RPN const &src)
{
	*this = src;
}

RPN::~RPN()
{
	std::cout << " >> RPN Done" << std::endl;
}

RPN &RPN::operator=(RPN const &src)
{
	if (this != &src)
		this->_notat = src._notat;
	return *this;
}

void	RPN::_notationChecker(std::string const notation) const
{
	size_t lenght = notation.length();
	for (size_t i = 0; i != lenght; i++)
		if (!isdigit(notation[i]) && !strchr("+/-* ", notation[i]))
			throw " >> Invalid characters for a numeric notation";
	//Check notation is right written
}

void	RPN::_calculateRPN(std::string const notation)
{
	std::string nt(notation);

	while (!nt.empty())
	{
		this->_extractNext(nt);
		if (this->next.which)
			this->_notat.push(this->next.nb);
		else
			this->_calcIt();
	}
	std::cout << "Result: " << this->_notat.top() << std::endl;
	this->_notat.pop();
}

void	RPN::_extractNext(std::string & nt)
{
	size_t	pos = 0;

	while (nt[pos] == ' ') pos++;
	this->next.which = true;
	if (nt[pos] == '-' && isdigit(nt[pos + 1]))
	{
		pos++;
		this->next.nb = (float)(nt[pos] - '0') * -1.0;
		//std::cout << this->next.nb << std::endl;//Logs delete
	}
	else if (isdigit(nt[pos]))
	{
		this->next.nb = (float)(nt[pos] - '0');
		//std::cout << this->next.nb << std::endl;//Logs delete
	}
	else
	{
		this->next.simbol = nt[pos];
		this->next.which = false;
	}
	pos++;
	nt.erase(0, pos);
}

void RPN::_calcIt()
{
	float	first;
	float	second;
	
	first = this->_notat.top();
	this->_notat.pop();
	second = this->_notat.top();
	this->_notat.pop();
	//std::cout << "HERE: " << first << " " << second << std::endl;

	switch (this->next.simbol)
	{
	case '+':
		second += first;
		break;

	case '-':
		second -= first;
		break;

	case '*':
		second *= first;
		break;

	case '/':
		second /= first;
		break;
	
	default:
		throw " >> OMG WTF HAPPEND HERE??";
		break;
	}
	this->_notat.push(second);
}
