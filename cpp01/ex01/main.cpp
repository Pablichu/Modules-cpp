/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:59:26 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 21:51:07 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

bool isNumber(const std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0)
			return false;
    return true;
}

int main(int argi, char **argc)
{
	if (argi != 2 || !isNumber(argc[1]))
	{
		std::cout << "Only one argument which is number please" << std::endl;
		return (0);
	}

	int horde_nb = std::atoi(argc[1]);
	Zombie	*horde = zombieHorde(horde_nb, "Bob");
	for (size_t i = 0; i < horde_nb; i++)
		horde[i].announce();
	delete [] horde;
}
