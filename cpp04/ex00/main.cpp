/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:49:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 19:25:08 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " / Dog" << std::endl;
	std::cout << i->getType() << " / Cat" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);

	const WrongAnimal* diff = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();

	std::cout << diff->getType() << std::endl;
	std::cout << x->getType() << std::endl;
	x->makeSound();
	diff->makeSound();
	delete(diff);
	delete(x);
}
