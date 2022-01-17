/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amena.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 21:37:59 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Telephone.hpp"

int	main(void)
{
	Telephone	info;
	std::string	cmd;

	std::cout << "Welcome to your Samsung Galaxy Mini\nPowered by Android 2.2 Froyo\n";
	std::cout << std::endl << "Insert a command: " << std::endl << "> ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			info.add_contact();
		else if (cmd == "SEARCH")
			info.show_contacts();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "That is not a valid command" << std::endl << "Please, be a better person" << std::endl << std::endl;
		std::cout << std::endl << "Insert a command: " << std::endl << "> ";
	}
	std::cout << "Bye, my lord!" << std::endl;
	return 0;	
}
