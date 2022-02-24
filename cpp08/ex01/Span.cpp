/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:46:04 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 17:23:47 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(int const &n) : _size(n)
{
	std::cout << " >> Span initialize!" << std::endl;
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span(void)
{
	std::cout << " >> Bye bye!" << std::endl;
}

Span	&Span::operator=(Span const &src)
{
	if (this == &src)
		return *this;
	this->_size = src._size;
	this->_nbs = src._nbs;
	return *this;
}

void	Span::addNumber(int newNb)
{
	if (this->_nbs.size() >= this->_size)
		throw FullException();
	this->_nbs.push_back(newNb);
}

void	Span::addNumber()
{
	if (this->_size == this->_nbs.size())
		throw ;
	srand(time(NULL));
	while (this->_nbs.size() < this->_size)
		this->_nbs.push_back(rand() % 10000);
}

int		Span::shortestSpan()
{
	if (this->_size <= 1)
		throw NoValuesException();
	std::vector<int>	tpm = this->_nbs;
	std::sort(tpm.begin(), tpm.end());
	int	minSpan = tpm[1] - tpm[0];
	for (size_t i = 1; i < (tpm.size() - 1); i++)
		if (minSpan > tpm[i + 1] - tpm[i])
			minSpan = tpm[i + 1] - tpm[i];
	return minSpan;
}

int		Span::longestSpan()
{
	if (this->_size <= 1)
		throw NoValuesException();
	int	longSpan = (int)*std::max_element(this->_nbs.begin(), this->_nbs.end());
	longSpan = longSpan - *std::min_element(this->_nbs.begin(), this->_nbs.end());
	return longSpan;
}

const char*	Span::FullException::what() const throw() {
	return ("Maximum size of values reached");
}

const char*	Span::NoValuesException::what() const throw() {
	return ("There are not enought values to calculate");
}
