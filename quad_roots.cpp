// for input and output
# include <iostream>

/*
	Author: LeeTuah
	Program: Solving Quadratic Equation
	Date: 06/05/23
	For SuperB League event
*/

// returns the two roots of a quadratic equation
// a -> coefficient attached with degree 2 of x
// b -> coefficient with degree 1 of x
// c -> constant term
std::pair<float, float> quadratic_answers(int a, int b, int c){
	// variable declaration
	const int D = b*b - (4*a*c); // storing the discriminant
	std::pair<float, float> ans;
	
	// if ans are imaginary, return 0
	if(D < 0){
		ans.first = 0;
		ans.second = 0;
		return ans;	
	}
	
	// calculating the quadratic roots from formula: 
	// {-b +- sqrt(b*b - 4ac)} / 2a
	ans.first = ((b * -1) + sqrt(D))/(float)2*a;
	ans.second = ((b * -1) - sqrt(D))/(float)2*a;
	
	return ans;
}

// execution starts from here
// int argc -> total argument count from run
// char** argv -> all the provided arguments in a string array
int main(int argc, char** argv){
	// variable declaration
	int a, b, c;
	std::pair<float, float> ans;
	
	// taking input from user
	std::cout << "Enter a, b, and c respectively:\n";
	std::cin >> a >> b >> c;
	
	// calculating the roots
	ans = quadratic_answers(a, b, c);
	
	// printing the roots
	std::cout << "The ans of the equation are " << ans.first << " and " << ans.second;
	return 0;
}
