/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:50:01 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/22 18:04:08 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T &a, T &b) {
	T	tpm = a;

	a = b;
	b = tpm;
}

template<typename T>
T const		&min(T const &a, T const &b) {
	return (a < b ? a : b);
}

template<typename T>
T const		&max(T const &a, T const &b) {
	return (a > b ? a : b);
}
