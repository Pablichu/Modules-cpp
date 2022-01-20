/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:08:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/20 20:27:15 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	le_string = "HI THIS IS BRAIN";

	std::string *stringPTR = &le_string;
	std::string &stringREF = le_string;

	std::cout << "Original: " << &le_string << std::endl
			  << "StringPTR: " << stringPTR << std::endl
			  << "StringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "StringPTR: " << *stringPTR << std::endl
			  << "StringREF: " << stringREF << std::endl;
}