// for input and output
# include <iostream>
// for dynamic array
# include <vector>
/*
	Author: LeeTuah
	Program: Strings with letter 'a' in third position
	Date: 07/05/23
	For SuperB League event
*/

// definiton to shorten the syntax
# define str_list std::vector<std::string>

// returns the number of times the letter 'a' was used in third index
// list -> reference vector containing all strings
int stringLetterCount(str_list &list){
	int count = 0; // storing total count of strings required
	
	// looping through the list
	for(auto i = list.begin(); i != list.end(); i++){
		// checking if third index is 'a' or 'A', then adding one to count
		if(i->at(2) == 97 || i->at(2) == 65) count++;	
	}
	
	// returning total count
	return count;
}

// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	// variable declaration here
	int count;
	std::string input;
	str_list list;
	
	// asking user input
	std::cout << "How many strings you want to give?: ";
	std::cin >> count;
	
	// iterating for the total count times
	for(int i = 1; i <= count; i++){
		// asking user for the string and pushing it in vector
		std::cout << "Enter string number " << i << ": ";
		std::cin >> input;
		list.push_back(input);	
	}
	
	// calculating and printing the result
	std::cout << "Total numbers of strings with \'a\' in third index: " << stringLetterCount(list);
	return 0;
}
