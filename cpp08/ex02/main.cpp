/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:57:52 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 19:05:06 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(int ar, char **)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	if (ar != 1)
	{
		std::cout << std::string(30, '-') << std::endl;
		std::cout << "Some reverse for you to know :P" << std::endl;
		std::cout << "Reverse of rbegin: " << *(mstack.rbegin()) << std::endl;

		const MutantStack<int> constantin(mstack);

		std::cout << "Also works with const types!" << std::endl;
		std::cout << "Const begin: " << *(constantin.begin()) << std::endl;
		std::cout << "Const reverse begin: " << *(constantin.rbegin()) << std::endl;
		std::cout << "Const end: " << *(constantin.end()) << std::endl;
		std::cout << std::string(30, '-') << std::endl;
	}

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
