/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:49:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 20:09:32 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal* i = new Cat();

	std::cout << std::endl;
	i->makeSound();
	std::cout << "HOLY SHIT, DID YOU REALLY SHIT IN MY CRIB? YOU BIG MOTHERFUCKER!!" << std::endl << std::endl;

	std::cin.ignore();
	delete i;
}
