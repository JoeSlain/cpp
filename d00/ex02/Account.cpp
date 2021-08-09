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
	Account::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void Account::_displayTimestamp(void){
	time_t t;
	struct tm * timeinfo;

	time(&t);
	timeinfo = localtime (&t);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mday << timeinfo->tm_mon 	<< "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "]";
}


/*********************************
* 		Public functions	 	 *
*********************************/
void	Account::makeDeposit( int deposit ){
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
	if (withdrawal >  this->_amount)
		return (false);
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";deposit:" << withdrawal << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbWithdrawals << std::endl;

	return (true);
}
	
int		Account::checkAmount( void ) const
{
	return 0;
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;

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
	std::cout << " accounts:" << std::to_string(getNbAccounts())
	<< ";total:" << std::to_string(getTotalAmount())
	<< ";deposits:" << std::to_string(getNbDeposits())
	<< ";withdrawals:" << std::to_string(getNbWithdrawals())
	<< std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
