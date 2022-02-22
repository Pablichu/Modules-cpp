/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:04:04 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/22 22:00:48 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class	Array
{
	private:
		unsigned int	_len;
		T				*_array;
	public:
		Array(void) : _len(0), _array(new T[0]) {};
		Array(unsigned int const n) : _len(n), _array(new T[n]) {};
		Array(Array const &src) { *this = src; };
		~Array(void) { delete[] this->_array; };

		Array	&operator=(Array const &src)
		{
			this->_len = src._len;
			this->_array = new T[src._len];
			for (unsigned int i = 0; i < src._len; i++)
				this->_array[i] = src._array[i];
			return *this;
		};

		T	&operator[](unsigned int i) const
		{
			if (i >= this->_len || this->_len == 0)
				throw std::exception();
			return this->_array[i];
		};

		unsigned int	getLen() const
		{
			return this->_len;
		};
};
