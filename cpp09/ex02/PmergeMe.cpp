/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:23 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/20 00:51:50 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const int args, const char **arg_nbs)
{
	//Inserting in vector
	for (int i = 0; i != args; i++)
		this->cont1.push_back(std::atoi(arg_nbs[i]));
	
	//Inserting in deque
	for (int i = 0; i != args; i++)
		this->cont2.push_back(std::atoi(arg_nbs[i]));
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
	if (this != &src)
	{
		this->cont1 = src.cont1;
		this->cont2 = src.cont2;
	}
	return *this;
}

const bool PmergeMe::sort()
{

	std::cout << "Before: " << std::endl;
	std::cout << "After: " << std::endl;
	return true;
}


template <typename Container>
const bool PmergeMe::itIsSorted(const Container& c) const
{
	return false;
	
}
