/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:23 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/30 19:04:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const int args, const char **arg_nbs) : nbrs(args)
{
	if (args == 0)
		throw "No args passed";
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
	size_t	n = this->nbrs < 9 ? this->nbrs : 8;
	for (size_t i = 0; i < n; i++)
		std::cout << " " << this->cont2[i];
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
	for (size_t i = 0; i < n; i++)
		std::cout << " " << this->cont2[i];
	std::cout << std::endl;


	//Final print
	std::cout << std::endl << "Is vector sorted? -> ";
	if (this->itIsSorted(0))
		std::cout << "Sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for vector: ";
	this->_readableTime(this->time1);
	std::cout << std::endl;

	std::cout << std::endl << "Is deque sorted? ->  ";
	if (this->itIsSorted(1))
		std::cout << "Sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for deque: ";
	this->_readableTime(this->time2);
	std::cout << std::endl;
	std::cout << std::endl;
	this->_readableTime(this->time1);
	std::cout << std::endl;
	this->_readableTime(this->time2);
	std::cout << std::endl;
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

void	PmergeMe::_readableTime(const std::chrono::nanoseconds& time)
{

	if (time.count() >= 1000000000)
		std::cout << std::chrono::duration_cast<std::chrono::seconds>(time).count() << " s";
	else if (time.count() >= 1000000)
		std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(time).count() << " ms";
	else if (time.count() >= 1000)
		std::cout << std::chrono::duration_cast<std::chrono::microseconds>(time).count() << " µs";
	else
		std::cout << time.count() << " ns";
}

template <typename Container> void PmergeMe::_sorter(Container& c)
{
	if (this->nbrs > 50)
	{
		size_t	size = c.size();
		if (size <= 1)
			return;

		typename Container::iterator middle = c.begin() + size / 2;
		Container left(c.begin(), middle);
		Container right(middle, c.end());

		this->_sorter(left);
		this->_sorter(right);

		this->_merge(c, left, right);
	}
	else
		this->_insertion(c, 0, this->nbrs);
}

template <typename Container> void PmergeMe::_merge(Container &c, const Container& left, const Container& right)
{
    Container result(left.size() + right.size());
    typename Container::const_iterator left_it = left.begin(), right_it = right.begin();
    typename Container::iterator result_it = result.begin();

    while (left_it != left.end() && right_it != right.end())
    {
        if (*left_it <= *right_it)
        {
            *result_it++ = *left_it++;
        }
        else
        {
            *result_it++ = *right_it++;
        }
    }

    result_it = std::copy(left_it, left.end(), result_it);
    result_it = std::copy(right_it, right.end(), result_it);
    std::copy(result.begin(), result.end(), c.begin());
}

template <class Container> void PmergeMe::_insertion(Container&c, const size_t begin, const size_t len)
{
	int aux;
	for (size_t i = begin; i < (begin + len); i++)
	{
		for (size_t j = begin; j < (begin + len - 1) ; j++)
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
