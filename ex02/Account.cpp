/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:55:54 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/11 23:19:12 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
        return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
        return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
        return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
        return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp()
{
        std::time_t result = std::time(NULL);
        std::tm *local = std::localtime(&result);
        std::cout << "["
                  << (1900 + local->tm_year)
                  << std::setfill('0') << std::setw(2) << (1 + local->tm_mon)
                  << std::setw(2) << local->tm_mday
                  << "_"
                  << std::setw(2) << local->tm_hour
                  << std::setw(2) << local->tm_min
                  << std::setw(2) << local->tm_sec
                  << "]";
}

void Account::displayAccountsInfos(void)
{
        Account::_displayTimestamp();
        std::cout << " account:" << Account::getNbAccounts()
                  << ";total:" << Account::getTotalAmount()
                  << ";deposits:" << Account::getNbDeposits()
                  << ";withdrawals:" << Account::getNbWithdrawals()
                  << std::endl;
}

Account::Account(int initial_deposit)
 : _accountIndex(_nbAccounts), 
   _amount(initial_deposit),
   _nbDeposits(0),
   _nbWithdrawals(0)
{
        _nbAccounts++;
        _totalAmount += initial_deposit;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex
                  << ";amount:" << _amount
                  << ";created" << std::endl;
                  
}

Account::~Account(void)
{
        _displayTimestamp();
        std::cout << " index:"  << _accountIndex
                  << ";amount:" << _amount
                  << ";closed"  << std::endl;
                  
}


void Account::makeDeposit(int deposit){
        Account::_displayTimestamp();
        std::cout << " index:" << _accountIndex
                << ";p_amount:" << _amount;
        Account::_amount += deposit;
        Account::_nbDeposits++;
        _totalAmount += deposit;
        _totalNbDeposits++;
        
        std::cout << ";deposite:" << deposit
                  << ";amount:" << _amount
                  << ";nb_deposits:" << _nbDeposits
                  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
        
        Account::_displayTimestamp();
        std::cout << " index:" << _accountIndex
                << ";p_amount:" << _amount;
        if (_amount < withdrawal)
        {
                std::cout << ";withdrawal:refused" << std::endl;
                return false;
        }
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        
        std::cout << ":withdrawal:" << withdrawal
                  << ";amount" << _amount
                  << ";nb_withdrawls:" << _nbWithdrawals
                  << std::endl;
        return true;
}

int Account::checkAmount(void) const{
     return (_amount);   
}

void Account::displayStatus(void) const
{
        _displayTimestamp();
        std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}
