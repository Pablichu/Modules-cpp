/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/01 21:28:02 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void simpleCheck(int argc)
{
	if (argc != 2)
		throw " >> Only one argument. More or less forbidden";
}

int	main(int argc, char **args)
{
	try
	{
		simpleCheck(argc);

		RPN(args[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error " << e.what() << std::endl;
	}
	
}
