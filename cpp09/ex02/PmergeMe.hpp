/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:19 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/21 20:31:59 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <chrono>
#include <vector>
#include <deque>
#include <algorithm>
#include <typeinfo>

class PmergeMe
{
	private:
	std::vector<int>	cont1;
	std::deque<int>		cont2;

	std::chrono::nanoseconds time1;
	std::chrono::nanoseconds time2;

	size_t	nbrs;

	//define two new variables for execution time 


	public:
		PmergeMe();
		PmergeMe(const int args, const char **arg_nbs);
		PmergeMe(PmergeMe const &src);
		~PmergeMe();


		PmergeMe &operator=(PmergeMe const &src);

		void sort();
		bool itIsSorted(const bool opt) const;

	private:
		template <typename Container> void _sorter(Container& c);
		template <typename Container> void _merge(Container& c, const Container& left, const Container& right);
		template <class Container> void _insertion(Container& c, const size_t begin, const size_t len);
};

/*int main() {
  // Start the timer
  auto start = std::chrono::high_resolution_clock::now();

  // Call the function you want to measure
  myFunction();

  // End the timer
  auto end = std::chrono::high_resolution_clock::now();

  // Compute the elapsed time in milliseconds
  auto elapsed_time_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

  // Print the elapsed time
  std::cout << "Elapsed time: " << elapsed_time_ms << " ms" << std::endl;

  return 0;
}*/