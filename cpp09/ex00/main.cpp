/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:39 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/03 22:01:39 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argvs)
{
    if (argc != 2)
    {
        std::cout << "Bro, don't forget to put a file ok? Just one" << std::endl;
        return 1;
    }
    // try
    // {
        BitcoinExchange exchanger;
        exchanger.process(argvs[1]);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    return 0;
}
