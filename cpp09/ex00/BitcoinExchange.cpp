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
	std::regex		dateRegex("^(\\d{4}-\\d{2}-\\d{2}),(\\d+|\\d+\\.\\d*)$");
	std::string		date;
	size_t			i = 1;
	std::smatch		match;

	if (data.fail())
		throw "Error: data.csv not found";
	std::getline(data, line);
	if (line != "date,exchange_rate" && !std::regex_match(line, match, dateRegex))
		throw "Error: first line of data.csv is not right";
	while (std::getline(data, line))
	{
		if (!std::regex_match(line, match, dateRegex))
		{
		    std::string unmatched = match.prefix().str() + match.suffix().str();
    		std::cout << "Unmatched in " << i << ": " << unmatched << std::endl;
			throw "Error: line does not match the required format";
		}
		date = line.substr(0, 10);
		this->database[date] = std::stof(line.substr(11));
		i++;
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
	std::ifstream	input(file);
	std::regex		inputRegex("^(\\d{4}-\\d{2}-\\d{2})\\s\\|\\s(\\d+(\\.\\d*)?)?$");
	std::string		line;
	std::string		date;
	float			amount;
	float			value;

	if (input.fail())
		throw "Error: file not valid";
	getline(input, line);
	if (line != "date | value" && !std::regex_match(line, inputRegex))
		throw "Error: input file do not being with 'date | value'";
	while (getline(input, line))
	{
		if (!std::regex_match(line, inputRegex))
		{
			std::cout << "Error: bad input -> |" << line << "|" << std::endl;
			continue;
		}

		amount = std::stof(line.substr(13));
		if (amount < 0)
		{
			std::cout << "Error: not a positive number" << std::endl;
			continue;
		}
		if (amount < 1 || amount > 1000)
		{
			std::cout << "Error: value is not in the permited range" << std::endl;
			continue;
		}
		
		date = line.substr(0, 10);
		value = this->_search(date);					
		std::cout << date << " => " << amount << " = " << amount * value << std::endl;
	}
}

float	BitcoinExchange::_search(const std::string &date)
{
	std::map<std::string, float>::iterator	it = database.lower_bound(date);
	if (it == database.end())
		std::cout << "No value found for date: " << date << std::endl;
	return it->second;
}
