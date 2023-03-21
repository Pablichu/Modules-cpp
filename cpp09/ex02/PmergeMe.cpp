/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:23 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/21 20:41:09 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const int args, const char **arg_nbs) : nbrs(args)
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

void PmergeMe::sort()
{
	std::cout << "Before: ";
	for (size_t i = 0; i < 8; i++)
		std::cout << " " << this->cont1[i];
	std::cout << std::endl;
	


	std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
	this->_sorter(this->cont1);//sorter
	std::chrono::time_point<std::chrono::high_resolution_clock> stop = std::chrono::high_resolution_clock::now();
	this->time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

	start = std::chrono::high_resolution_clock::now();
	this->_sorter(this->cont2);//sorter
	stop = std::chrono::high_resolution_clock::now();
	this->time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

	std::cout << "After:  ";
	for (size_t i = 0; i < 8; i++)
		std::cout << " " << this->cont2[i];
	std::cout << std::endl;

	//Final print
	std::cout << std::endl << "Is vector sorted? -> ";
	if (this->itIsSorted(0))
		std::cout << "It is sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for vector: " << this->time1.count() << std::endl;
	std::cout << std::endl << "Is deque sorted? ->  ";
	if (this->itIsSorted(1))
		std::cout << "It is sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for deque: " << this->time2.count() << std::endl;
	std::cout << this->time1.count() << std::endl << this->time2.count() << std::endl;
}

bool PmergeMe::itIsSorted(const bool opt) const
{
	if (opt)
	{
		for (size_t i = 0; i < this->cont2.size() - 1; i++)
		{
			if (this->cont2[i] > this->cont2[i + 1])
				return false;
		}
	}
	else
	{
		for (size_t i = 0; i < this->cont2.size() - 1; i++)
		{
			if (this->cont2[i] > this->cont2[i + 1])
				return false;
		}
	}
	return true;
}

template <typename Container> void PmergeMe::_sorter(Container& c)
{
	if (this->nbrs > 50)
	{
		int half = this->nbrs / 4; //look out with the odds
		this->_merge(c, 0, half - 1);
		this->_merge(c, half, (half*2) - 1);
		this->_merge(c, half*2, (half*3) - 1);
		this->_merge(c, half*3, half*4);
	}
	this->_insertion(c, 0, this->nbrs);
}

template <typename Container> void PmergeMe::_merge(Container &c, size_t begin, size_t len)
{
	int aux;
	for (size_t i = begin; i < len; i++)
	{
		for (size_t j = begin; j < len - 1; j++)
		{
			if (c[j] > c[j + 1])
			{
				aux = c[j + 1];
				c[j + 1] = c[j];
				c[j] = aux;
			}
		}
	}
}

template <class Container> void PmergeMe::_insertion(Container& c, size_t begin, size_t len)
{
	int aux;
	for (size_t i = begin; i < len; i++)
	{
		for (size_t j = begin; j < len - 1; j++)
		{
			if (c[j] > c[j + 1])
			{
				aux = c[j + 1];
				c[j + 1] = c[j];
				c[j] = aux;
			}
		}
	}
}

