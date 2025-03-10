#include <iostream>
#include <string>
#include <algorithm>
#include "Account.h"
#include "Timer.h"

void assignmentTask1();
Assignment_2::Account** create_accounts(int size, int max_balance);
void print_accounts(Assignment_2::Account* accounts[], int size);
void sort_accounts(Assignment_2::Account** accounts, int size);
void test_account();
int insertion_sort(Assignment_2::Account* accounts[], int n);

int main()
{
	assignmentTask1();

	return 0;
}

void assignmentTask1()
{
	test_account();
}

void test_account()
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

	std::cout << "\nCreating the list of accounts:\n";
	Assignment_2::Account** accounts = create_accounts(SIZE, MAX_BALANCE);

	std::cout << "\nPrinting the list of accounts:\n";
	print_accounts(accounts, SIZE);

	std::cout << "\nSorting the list of accounts:\n";
	sort_accounts(accounts, SIZE);

	std::cout << "\nPrinting the list of accounts after sort:\n";
	print_accounts(accounts, SIZE);

	std::cout << "\nDeleting the accounts:\n";
	for (int i = 0; i < SIZE; i++)
	{
		delete(accounts[i]);
	}
}

Assignment_2::Account** create_accounts(int size, int max_balance)
{
	Assignment_2::Account** accounts = new Assignment_2::Account * [size];

	for (int i = 0; i < size; i++)
	{
		accounts[i] = new Assignment_2::Account(rand() % max_balance);
	}

	return accounts;
}

void print_accounts(Assignment_2::Account* accounts[], int size)
{
	for (int i = 0; i < size; i++)
	{
		accounts[i]->print_info();
	}
}

void sort_accounts(Assignment_2::Account** accounts, int size)
{
	Timer* timer = new Timer();
	int swaps = insertion_sort(accounts, size);
	delete(timer);

	std::cout << "\nNo. of swaps: " << swaps << "\n";
}

int insertion_sort(Assignment_2::Account* accounts[], int size)
{
	int swaps = 0;

	for (int i = 1; i < size; ++i)
	{
		Assignment_2::Account* key = accounts[i];

		int j = i - 1;

		while (j >= 0 && accounts[j]->get_balance() > key->get_balance())
		{
			accounts[j + 1] = accounts[j];
			swaps++;
			j = j - 1;
		}

		accounts[j + 1] = key;
		swaps++;
	}

	return swaps;
}