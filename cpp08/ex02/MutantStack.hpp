/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:59:09 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 18:53:52 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {};
	~MutantStack() {};

	MutantStack	&operator=(MutantStack<T> const &src)
	{
		if (this != &src)
			std::stack<T>::operator=(src);
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin()
	{
		return this->c.begin();
	};
	iterator	end()
	{
		return this->c.end();
	};

	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	const_iterator	begin() const
	{
		return this->c.begin();
	};
	const_iterator	end() const
	{
		return this->c.end();
	};

	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	};
	reverse_iterator	rend()
	{
		return this->c.rend();
	};

	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
	const_reverse_iterator	rbegin() const
	{
		return this->c.rbegin();
	};
	const_reverse_iterator	rend() const
	{
		return this->c.rend();
	};
};
