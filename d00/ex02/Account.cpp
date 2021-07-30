#include "Account.hpp"
#include <iostream>
#include <time.h>

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
	Account::_displayTimestamp();
	std::cout << "  index" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void Account::_displayTimestamp(void){
	time_t t;
	struct tm * timeinfo;

	time(&t);
	timeinfo = localtime (&t);
	std::cout << timeinfo->tm_year + 1900 << timeinfo->tm_mday << timeinfo->tm_mon 	<< "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << std::endl;
}


/*********************************
* 		Public functions	 	 *
*********************************/
void	makeDeposit( int deposit ){
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}
	bool	makeWithdrawal( int withdrawal ){
		if (withdrawal >  this->amount)
			return (false);
		this->amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
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
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;