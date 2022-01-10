/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 02:16:57 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/12/20 16:51:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int j = 1; j < argc; j++)
		{
			for (int i = 0; argv[j][i]; i++)
				std::cout << (char)std::toupper(argv[j][i]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
