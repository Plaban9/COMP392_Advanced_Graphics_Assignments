#pragma once
#include <iostream>
#include <string>

namespace Assignment_2
{
	class Account
	{
	private:
		double _balance;
		std::string _account_number;
		static int LAST_NUMBER;

	public:
		Account(double balance);
		~Account();
		void print_info() const;
		double get_balance() const;
	};
}
