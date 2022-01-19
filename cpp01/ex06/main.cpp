/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:36:02 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/18 19:34:23 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argi, char **argv)
{
	if (argi != 2)
	{
		std::cout << "[ Karen thinks too much ]" << std::endl
				  << "When Karen thinks several things at the same time it is the best thing" << std::endl
				  << "that can happen because after this event she does not do anything important." << std::endl;
		return 0;
	}
	
	Karen	what_she_says;
	what_she_says.complain(argv[1]);
	return 0;
}
