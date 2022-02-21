/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:20:47 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/21 00:34:29 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <iomanip>

void	catcher(const std::string &lefrase, const int flag)
{
	std::string	types[4] = {"char", "int", "float", "double"};
	try
	{
		switch (flag)
		{
		case 0:
		{
			if (lefrase.length() == 1 && !isdigit(lefrase[0]))
				std::cout << "char >> " << lefrase << std::endl;
			else
			{
				const int	num_char = static_cast<int>(std::stoi(lefrase));
				if (isprint(num_char))
					std::cout << "char >> " << static_cast<char>(num_char) << std::endl;
				else
					std::cout << "char >>  Non displayable" << std::endl;
			}
			break;
		}
		case 1:
		{
			int	num_int;
			if (lefrase.length() == 1)
				num_int = static_cast<int>(lefrase[0]);
			else
				num_int = static_cast<int>(std::stoi(lefrase));
			std::cout << "int   >> " << num_int << std::endl;
			break;
		}
		case 2:
		{
			float	num_float;
			if (lefrase.length() == 1)
				num_float = static_cast<float>(lefrase[0]);
			else
				num_float = static_cast<float>(std::stof(lefrase));
			std::cout << "float >> " << std::fixed << std::setprecision(1) << num_float << "f" << std::endl;
			break;
		}
		case 3:
		{
			double	num_double;
			if (lefrase.length() == 1)
				num_double = static_cast<double>(lefrase[0]);
			else
				num_double = static_cast<double>(std::stod(lefrase));
			std::cout << "double >> " << std::fixed << std::setprecision(1) << num_double << "f" << std::endl;
			break;
		}
		}
	}
	catch(const std::invalid_argument& e)
	{
		std::cout << types[flag] << " >> invalid argument" << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cout << types[flag] << " >> value out of range" << std::endl;
	}
	
}

int	main(int args, char **argv)
{
	if (args != 2)
	{
		std::cout << " >> Bro, just one okay? Not gonna parse your shit." << std::endl;
		return 1;
	}
	const std::string	lefrase = argv[1];
	catcher(lefrase, 0);//char
	catcher(lefrase, 1);//int
	catcher(lefrase, 2);//float
	catcher(lefrase, 3);//double
	return 0;
}
