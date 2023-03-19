/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:23 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/20 00:49:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const char **arg_nbs)
{

}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
	//if (this != &src)
	//{
	//}
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
