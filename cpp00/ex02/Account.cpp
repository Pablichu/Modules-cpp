/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:10:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/06 23:10:55 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(void)
{
	Account(0);	
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";total:" << this->_amount
			  << ";created" << std::endl;
	t::_nbAccounts++;
	t::_totalAmount += initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";total:" << this->_amount
			  << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (t::_amount);
}

void	Account::_displayTimestamp( void )
{
    time_t      timer;
    struct tm*  timeinfo;
    char    buffer[19];

	time(&timer);
    timeinfo = localtime(&timer);
    strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:"
			  << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";total:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";whitdrawals:" << t::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";p_amount:" << t::_amount
			  << ";deposit:" << deposit << ";amount:" << t::_amount + deposit
			  << ";nb_deposits:" << ++t::_nbDeposits << std::endl;
	t::_amount += deposit;
	t::_totalNbDeposits++;
	t::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	//[19920104_091532] index:5;p_amount:23;withdrawal:refused
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";p_amount:" << t::_amount;
	if ((t::_amount - withdrawal) < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << t::_amount - withdrawal
			  << ";nb_withdrawals:" << ++t::_nbWithdrawals << std::endl;
	t::_amount -= withdrawal;
	t::_totalNbWithdrawals++;
	t::_totalAmount -= withdrawal;
	return true;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;