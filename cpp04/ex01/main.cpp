/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:49:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 19:58:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << std::string(25, '-') << std::endl;
	Dog basic;
	{
		Dog tpm = basic;
		std::cout << std::string(25, '-') << std::endl;
		tpm.whatThink();
	}
	std::cout << std::string(25, '-') << std::endl;
	basic.whatThink();
}
