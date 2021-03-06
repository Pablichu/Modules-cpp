/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:10:28 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 11:26:13 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>

template <typename T>
std::list<int>::const_iterator	easyfind(T &container, int const nb)
{
	std::list<int>::const_iterator	nbIt;
	nbIt = std::find(container.begin(), container.end(), nb);
	if (nbIt == container.end())
		throw std::exception();
	return nbIt;
}
