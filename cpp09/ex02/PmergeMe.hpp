/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:19 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/20 00:49:47 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
	std::vector<int>	cont1;
	std::deque<int>		cont2;



	size_t	nbrs;

	//define two new variables for execution time 


	public:
		PmergeMe();
		PmergeMe(const char **arg_nbs);
		PmergeMe(PmergeMe const &src);
		~PmergeMe();

		PmergeMe &operator=(PmergeMe const &src);

		const bool sort();

		template <typename Container>
		const bool itIsSorted(const Container& c) const;

};
