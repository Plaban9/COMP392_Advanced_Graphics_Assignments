#include <iostream>
#include <string>

void assignmentTask1();

int main()
{
	assignmentTask1();

	return 0;
}

void assignmentTask1()
{
	float salary;
	std::string name;

	std::cout << "===== Enter Employee Details ======";

	std::cout << "\nEnter Employee Name: ";
	std::getline(std::cin, name);
	std::cout << "Enter Employee Monthly Salary: ";
	std::cin >> salary;

	std::cout << "\n****** Employee Details ******";
	std::cout << "\nEmployee Name: " << name << "\nEmployee Yearly Salary: $" << salary * 12;
}