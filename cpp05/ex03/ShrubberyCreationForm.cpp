/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:20:19 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/17 21:42:32 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Model 060", 145, 137), _target("Ministry of Trees")
{
	std::cout << "Shrubbery form has been created by standart properties." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Model 060", 145, 137), _target(target)
{
	std::cout << "Shrubbery form has been created for " << this->_target << "." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " * Your president form has been keeped in a safe box *" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

void	ShrubberyCreationForm::proceed() const
{
	std::string tpm(_target);
	tpm.insert(tpm.length(), "_shrubbery");
	std::ofstream	outFile(tpm);
	outFile << "	          .     .  .      +     .      .          . " << std::endl
			<< "     .       .      .     #       .           .         " << std::endl
			<< "        .      .         ###            .      .      . " << std::endl
			<< "      .      .    #:. .:## ##:. .:#   .      .     	    " << std::endl
			<< "          .      . '####'###'####'  .                   " << std::endl
			<< "       .     '#:.    .:#'###'#:.    .:#'  .        .    " << std::endl
			<< "  .             '#########'#########'        .        . " << std::endl
			<< "        .    '#:.  '####'###'####'  .:#'   .       .    " << std::endl
			<< "     .     .  '#######'##'##'#######'                  ." << std::endl
			<< "                .'##'#####'#####'##'           .      . " << std::endl
			<< "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .     " << std::endl
			<< "      .     '#######'##'#####'##'#######'      .     .  " << std::endl
			<< "    .    .     '#####''#######''#####'    .      .      " << std::endl
			<< "            .     '      000      '    .     .          " << std::endl
			<< "       .         .   .   000     .        .       .     " << std::endl
			<< ".. .. ..................O000O........................ ..";
	outFile.close();
}
