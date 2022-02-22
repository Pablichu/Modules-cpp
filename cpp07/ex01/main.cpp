/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:24:39 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/22 20:53:28 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int	tab[] = {10, 15, 8904363, 5};
	char str[] = "pepe el leve se mete de cesped";

	iter(tab, 4, zero);
	iter(str, 30, aficador);
	iter(tab, 2, prinIt);
	std::cout << str << std::endl;
}
