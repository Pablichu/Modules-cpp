/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/08 18:42:28 by pmira-pe         ###   ########.fr       */
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
		std::string const notation(args[1]);
		RPN calculation(notation);
	}
	catch(const char *e) //not the proper way: https://stackoverflow.com/questions/31754532/terminating-with-uncaught-exception-of-type
	{
		std::cerr << "Error " << e << std::endl;
	}
	
}
