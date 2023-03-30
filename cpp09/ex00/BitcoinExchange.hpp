/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/30 18:28:31 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <regex>
#include <map>
#include <sstream>

#define DATABASE "data.csv"

class BitcoinExchange {
	private:
		std::map<std::string, float>  database;

		std::regex		dateRegex;

		float	_search(const std::string& date);

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=(BitcoinExchange const &src);

		void    process(const std::string& file);
};
