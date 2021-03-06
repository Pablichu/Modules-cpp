/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:10:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 11:24:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	numberfound(std::list<int> nblst, int const nb)
{
	try
	{
		easyfind(nblst, nb);
		std::cout << " >> Number " << nb << " has been found!!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << " >> Number " << nb << " not found!!" << std::endl;
	}
}

int	main()
{
	int const		numbers[] = {1, 2, 3, 4, 5, 100, 90, -8, 42};
	std::list<int>	nblst(numbers, numbers + (sizeof(numbers) / sizeof(int)));

	numberfound(nblst, 1);
	numberfound(nblst, 5);
	numberfound(nblst, -8);
	numberfound(nblst, 42);
	numberfound(nblst, 0);
	numberfound(nblst, 69);
	return 0;
}
