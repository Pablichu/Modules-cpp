/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:01:35 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/22 20:52:32 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	iter(T *str, int const len, void (*f)(T &data))
{
	for (int i = 0; i < len; i++)
		f(str[i]);
	return ;
}

template<typename T>
void	zero(T &data)
{
	data = 0;
}

template<typename T>
void	aficador(T &data)
{
	if (data == 'e' || data == 'i' || data == 'o' || data == 'u')
		data = 97;
}

template<typename T>
void	prinIt(T &data)
{
	std::cout << static_cast<T>(data) <<  std::endl; 
}
