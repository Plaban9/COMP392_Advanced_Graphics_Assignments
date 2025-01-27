#include "Account.h"

namespace Assignment_2
{
	int Account::LAST_NUMBER = 1000;

	Account::Account(double balance)
	{
		_balance = balance;
		_account_number = std::to_string(LAST_NUMBER);
		LAST_NUMBER++;

		std::cout << "<<ACCOUNT>> Constructor Invoked for account: " << _account_number << std::endl;
	}

	Account::~Account()
	{
		std::cout << "<<ACCOUNT>> Destructor Invoked for account: " << _account_number << std::endl;
	}

	void Account::print_info() const
	{
		std::cout << "Account: " << _account_number << ", Balance: " << _balance << std::endl;
	}

	double Account::get_balance() const
	{
		return _balance;
	}
}


