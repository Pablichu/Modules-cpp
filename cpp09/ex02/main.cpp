/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:26 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/21 18:32:17 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(const int argc, const char **args)
{
    try
    {
        PmergeMe    sorter(argc - 1, ++args);
        sorter.sort();
    }
    catch(const char *e)
    {
        std::cerr << "Error" << e << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
