#include <iostream>
#include <string>
#include "Account.h"

void assignmentTask1();
void test_account();

int main()
{
	assignmentTask1();

	return 0;
}

void assignmentTask1()
{
	srand(301344949);     //use your student number
	const int MAX_BALANCE = 100000;
	const int SIZE = 20;  //change this number to investigate performance
	Assignment_2::Account a1(rand() % MAX_BALANCE);
	Assignment_2::Account a2(rand() % MAX_BALANCE);
	Assignment_2::Account a3(rand() % MAX_BALANCE);
	Assignment_2::Account a4(rand() % MAX_BALANCE);

	a1.print_info();
	a2.print_info();
	a3.print_info();
	a4.print_info();

	//std::cout << "\nCreating the list of accounts:\n";
	//Assignement_2::Account** accounts = create_accounts(SIZE, MAX_BALANCE);

	//std::cout << "\nPrinting the list of accounts:\n";
	////print_accounts(accounts, SIZE);

	//std::cout << "\nSorting the list of accounts:\n";
	//sort_accounts(accounts, SIZE);

	//std::cout << "\nPrinting the list of accounts:\n";
	//print_accounts(accounts, SIZE);

	//std::cout << "\nDeleting the accounts:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	delete(accounts[i]);
	//}

}

void test_account()
{

}