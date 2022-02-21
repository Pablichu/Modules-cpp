/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:37:09 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/21 20:28:15 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
//#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int	randType = rand() % 3 + 1;
	if (randType == 1)
		return new A;
	if (randType == 2)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "La A jajaja" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "La B buuuuu" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "La C Cepeda music shit" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "La A de: A buscarte trabajo" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "La B de: Barre bien pa casa que la has liao" << std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "La C de: Cágate lorito" << std::endl;
}

int	main()
{
	Base	*whoistheclass;
	whoistheclass = generate();
	identify(whoistheclass);
	identify(*whoistheclass);
	delete whoistheclass;
	return 0;
}
