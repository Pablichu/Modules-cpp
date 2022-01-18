/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 00:17:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/18 00:09:07 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argi, char **argv)
{
	if (argi != 4)
	{
		std::cout << "Just one entry file name, the string to be replace & the new string" << std::endl;
		return 0;
	}
	
	std::string		in_content(argv[1]);
	std::ifstream	in_file(argv[1]);
	std::string		str1 (argv[2]);
	std::string		str2 (argv[3]);
	size_t			found;

	if (!in_file.is_open())
	{
		std::cout << "Cannot access the file" << std::endl;
		return 0;
	}
	
	in_content.insert(in_content.length(), ".replace");
	std::ofstream	out_file(in_content);

	while (true)
	{
		std::getline(in_file, in_content);
		while (1)
		{
			found = in_content.find(str1);
			if (found == std::string::npos)
				break ;
			else
			{
				in_content.erase(found, str1.length());
				in_content.insert(found, str2);
			}
		}
		if (!in_file.eof())
			out_file << in_content << std::endl;
		else
		{
			out_file << in_content;
			break ;
		}
	}
	in_file.close();
	out_file.close();
	return 0;
}
