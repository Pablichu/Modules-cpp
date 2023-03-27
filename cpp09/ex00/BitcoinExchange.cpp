#include "BitcoinExchange.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:01:33 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/03 22:01:33 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


BitcoinExchange::BitcoinExchange()
{
	std::ifstream	data(DATABASE);
	std::string		line;
	std::regex		dateRegex("\\d{4}-\\d{2}-\\d{2}");
	std::string		date;
	double			value;

	std::getline(data, line);
	if (line != "date,exchange_rate")
		throw "Error: first line of data.csv is not right";
	while (std::getline(data, line))
	{
		date = line.substr(0, 10);
		if (line[10] != ',' || !std::regex_match(date, dateRegex))
			throw "Error: line not match the required format";
		value = std::stod(line.substr(11));
		std::cout << "flo" << value << std::endl;// For any reason we are loosing precision 🤔
		// this->database[date] = std::stof(value);
	}
	data.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
	if (this != &src)
		this->database = src.database;
	return *this;
}

void BitcoinExchange::process(const std::string &file)
{
	std::cout << this->_search("2019-03-01");
}

float	BitcoinExchange::_search(const std::string &date)
{
	std::map<std::string, float>::iterator	it = database.lower_bound(date);
	if (it == database.end())
		std::cout << "No value found for date: " << date << std::endl;
	else
		std::cout << "Value for date " << date << " is " << it->second << std::endl;
	return it->second;
}
