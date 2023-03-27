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
	for (size_t i = 0; i < 8; i++)
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
	for (size_t i = 0; i < 8; i++)
		std::cout << " " << this->cont2[i];
	std::cout << std::endl;


	//Final print
	std::cout << std::endl << "Is vector sorted? -> ";
	if (this->itIsSorted(0))
		std::cout << "Sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for vector: " << this->time1.count() << std::endl;

	std::cout << std::endl << "Is deque sorted? ->  ";
	if (this->itIsSorted(1))
		std::cout << "Sorted!" << std::endl;
	else
		std::cout << "Not sorted D:" << std::endl;
	std::cout << "Time taken for deque: " << this->time2.count() << std::endl;
	std::cout << std::endl << this->time1.count() << std::endl << this->time2.count() << std::endl;
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
	// std::cout << std::endl << "before insertions" << begin << "|" << len << "-> ";
	// for (size_t i = begin; i < (begin + len); i++)
	// {
	// 	std::cout << " " << c[i];
	// }
	// std::cout << std::endl;

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

/*
#include <iostream>
#include <algorithm>
using namespace std;

const int K = 5;  // threshold value for switching to insertion sort

void insertionSort(int A[], int p, int q) {
    for (int i = p; i < q; i++) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
}

void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int* LA = new int[n1];
    int* RA = new int[n2];
    for (int i = 0; i < n1; i++) {
        LA[i] = A[p + i];
    }
    for (int i = 0; i < n2; i++) {
        RA[i] = A[q + 1 + i];
    }
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i <= r; i++) {
        if (RIDX == n2) {
            A[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            A[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            A[i] = LA[LIDX];
            LIDX++;
        } else {
            A[i] = RA[RIDX];
            RIDX++;
        }
    }
    delete[] LA;
    delete[] RA;
}

void mergeInsertSort(int A[], int p, int r) {
    if (r - p > K) {
        int q = (p + r) / 2;
        mergeInsertSort(A, p, q);
        mergeInsertSort(A, q + 1, r);
        merge(A, p, q, r);
    } else {
        insertionSort(A, p, r);
    }
}

int main() {
    int A[] = { 2, 5, 1, 6, 7, 3, 8, 4, 9 };
    int n = sizeof(A) / sizeof(A[0]);
    mergeInsertSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
In this implementation, K is set to 5, which is the threshold value 
for switching to insertion sort. The insertionSort function performs
insertion sort on a subarray of A from p to q. The merge function
merges two sorted subarrays of A from p to q and from q + 1 to r.
The mergeInsertSort function recursively sorts subarrays of A using
merge sort, and switches to insertion sort when the size of a subarray
is less than or equal to K. Finally, the main function creates
an array A, sorts it using merge-insertion sort, and prints the sorted array.
*/