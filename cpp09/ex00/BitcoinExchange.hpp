/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:36 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/03 22:01:36 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <regex>
#include <map>

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

// TODO:
    // - Functions to parse the file and csv
    // - CVS: "NNNN-NN-NN",float\n

// std::map<std::string, int> database;

// // add some date-value pairs to the map
// database["2022-01-01"] = 100;
// database["2022-02-01"] = 200;
// database["2022-03-01"] = 300;

// // lookup the value for a given date
// std::string search_date = "2022-02-15";
// auto it = database.lower_bound(search_date);
// if (it == database.end()) {
//     std::cout << "No value found for date: " << search_date << std::endl;
// } else {
//     std::cout << "Value for date " << search_date << " is " << it->second << std::endl;
// }