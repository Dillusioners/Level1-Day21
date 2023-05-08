// for input and output
# include <iostream>

/*
	Author: LeeTuah
	Program: 
	Date: 00/00/23
	For SuperB League event
*/


// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	// variable declaration and initialization
	std::string longest = "", input = "";
	int totalStrings;
	
	// asking user for input
	std::cout << "How many strings you want to enter?: ";
	std::cin >> totalStrings;
	// ignoring the newline from std::cin
	std::cin.ignore(1, '\n');
	// looping for totalStrings amount of times
	for(int i = 0; i < totalStrings; i++){
		// asking for input
		std::cout << "Enter string no." << i + 1 << ": ";
		std::getline(std::cin, input);
		
		// comparing string size, if input is bigger than the longest string is now the input
		if(input.size() > longest.size()) longest = input;
	}
	// printing out the longest string
	std::cout << "The longest string is " << longest;
	return 0;
}
