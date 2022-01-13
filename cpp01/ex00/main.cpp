/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:17:58 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 21:27:24 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(int argi, char **argc)
{
	argi--;
	argc++;
	std::cout << "This has been done without new" << std::endl;
	for (size_t i = 0; i < argi; i++)
		randomChump(argc[i]);
	
	std::cout << std::endl << "Now this has been done with new" << std::endl;
	Zombie	*group[argi];
	for (size_t i = 0; i < argi; i++)
		group[i] = newZombie(argc[i]);
	for (size_t i = 0; i < argi; i++)
		group[i]->announce();
	for (size_t i = 0; i < argi; i++)
		delete group[i];
	return (0);
}