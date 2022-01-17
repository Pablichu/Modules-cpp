/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 00:17:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 00:17:01 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argi, char **argv)
{
	if (argi != 2)
	{
		std::cout << "Just one entry file name" << std::endl;
		return 0;
	}
	
	std::ifstream	in_file(argv[1]);
	std::string		str1;
	std::string		str2;

	in_file >> str1 >> str2;
	in_file.close();
	std::cout << str1 << std::endl
			  << str2 << std::endl;
	str1.swap(str2);

	std::string		out_name = argv[1];
	out_name.insert(out_name.length(), ".replace");
	std::ofstream	out_file(out_name);

	out_file << str1 << str2;
	out_file.close();
	return 0;
}
