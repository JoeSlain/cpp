#include "Account.hpp"
#include <iostream>

/*********************************
* 		Con/de structors	 	 *
*********************************/

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	this->_displayTimestamp();
	std::cout << "  index" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}
Account::~Account( void )
{
	return ;
}


/*********************************
* 		Static functions	 	 *
*********************************/

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << std::to_string(getNbAccounts())
	<< ";total:" << std::to_string(getTotalAmount())
	<< ";deposits:" << std::to_string(getNbDeposits())
	<< ";withdrawals:" << std::to_string(getNbWithdrawals())
	<< std::endl;
}

int Account::_nbAccounts = 0;