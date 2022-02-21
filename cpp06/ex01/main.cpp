/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:42:56 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/21 01:13:03 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	Data
{
	int	i;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data		laData;
	Data		*leProof;
	uintptr_t	lePtr;

	laData.i = 21;
	lePtr = serialize(&laData);
	leProof = deserialize(lePtr);
	std::cout << " >> laData contains -> " << laData.i << std::endl;
	std::cout << " >> lePtr contains -> " << lePtr << std::endl;
	std::cout << " >> leProof has -> " << leProof->i << std::endl << std::endl;
	laData.i = 56;
	std::cout << " >> laData contains -> " << laData.i << std::endl;
	std::cout << " >> leProof has -> " << leProof->i << std::endl;
}