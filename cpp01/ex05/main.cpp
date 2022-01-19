/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:30:54 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/18 19:42:29 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <unistd.h>
#include <iomanip>

int	main()
{
	std::cout << "It was a wonderful in your dream job after finishing your" << std::endl
			  << "engineer career: Burger King employ!" << std::endl;
	//std::sleep(5);
	std::cout << "But suddenly... ";
	//std::sleep(5);
	Karen	bad_time;
	
	//std::sleep(5);
	std::cout << "Run, we gotta attend this one carefully!" << std::endl << std::endl;
	//std::sleep(5);
	std::cout << std::setfill ('=') << std::setw (52) << "" << std::endl;
	std::cout << "=   Welcome to Karen preventive incident system   =" << std::endl;
	std::cout << std::setfill ('=') << std::setw (52) << "" << std::endl << std::endl;
	std::cout << " > First step is the Debug mode so we know what Karen will"  << std::endl
			  << "   ask for eat." << std::endl << std::endl;
	//std::sleep(5);
	bad_time.complain("debug");

	std::cout << std::endl << " > Second step is Info mode. Karen will eventually angry" << std::endl
			  << "   about anything. Just do not mind her." << std::endl << std::endl;
	//std::sleep(5);
	bad_time.complain("info");

	std::cout << std::endl << " > Third step is Warning mode and before you ask, yes, this" << std::endl
			  << "   software was actually developed only for Karen. Now deal with her." << std::endl << std::endl;
	//std::sleep(5);
	bad_time.complain("warning");

	std::cout << std::endl << " > Last step: Error mode. It does not matter what you did or did not." << std::endl
			  << "   Karen always, and yes, always, will be dissapointed. No matter what" << std::endl << std::endl;
	//std::sleep(5);
	bad_time.complain("error");

	std::cout << std::endl << std::setfill ('=') << std::setw (52) << "" << std::endl;
	std::cout << "=    Karen preventive incident system finished    =" << std::endl;
	std::cout << std::setfill ('=') << std::setw (52) << "" << std::endl;
	return 0;
	
}
