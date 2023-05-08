// for input and output
# include <iostream>

/*
	Author: LeeTuah
	Program: Average Sale of an employee
	Date: 08/05/23
	For SuperB League event
*/


// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	// variables declared here
	int totalSales, totalEmployees;
	
	// asking for user input
	std::cout << "Enter the total sales of the company: ";
	std::cin >> totalSales;
	std::cout << "Enter the total no. of employees: ";
	std::cin >> totalEmployees;
	
	// printing the average sale	
	std::cout << "The average sale of each employee is " << totalSales / (float)totalEmployees;
	return 0;
}
