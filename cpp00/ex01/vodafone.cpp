/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vodafone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/04 19:22:18 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "telephone.hpp"

int	main(void)
{
	Contact	cont[8];
	std::string	cmd;

	std::cout << "Welcome to your Samsung Galaxy Mini\nPowered by Android 2.2 Froyo\n";
	while (true)
	{
		std::cout << "Insert a command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
			std::cout << "Not working" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "Not working" << std::endl;
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "That is not a valid command" << std::endl << "Please, be a better person\n";

	}
	std::cout << "Bye, my lord!" << std::endl;
	return 0;	
}
