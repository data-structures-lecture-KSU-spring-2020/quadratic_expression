// Travis Hescox
// Homework 2
// Number 3
// Data Structures CS 3305
// Section 4

#include <stdio.h>
#include <iostream>
#include "quadratic_expression.h"
#include <string>
#include <limits>

using namespace std;

int main(int argc, char **argv)
{
	double userInput;
	
	// Instantiate object
	quadratic_expression a;
	
	// Prompt user
	cout << "A quadratic equation is in the form 'ax^2 + bx + c = 0'." << endl;
	cout << "Enter values for 'a', 'b', and 'c' to return the function's x-intercepts." << endl;
	
	// Get input
	cout << "Enter value for 'a': ";
	cin >> userInput;
	
	// Validate input
	while (cin.fail()){
		cout << "Oops. That was an invalid entry." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter value for 'a': ";
		cin >> userInput;
	}
	
	// Set value
	a.setA(userInput);
	
	// Prompt user 
	cout << "Enter value for 'b': ";
	
	// Get input
	cin >> userInput;
	
	//Validate input
	while (cin.fail()){
		cout << "Oops. That was an invalid entry." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter value for 'b': ";
		cin >> userInput;
	}
	
	// Set value
	a.setB(userInput);
	
	// Prompt user
	cout << "Enter value for 'c': ";
	
	// Get input
	cin >> userInput;
	
	// Validate input
	while (cin.fail()){
		cout << "Oops. That was an invalid entry." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter value for 'c': ";
		cin >> userInput;
	}
	
	// Set value
	a.setC(userInput);
	
	// Query expression for coefficients
	cout << "You entered: " << endl;
	cout << "\ta: " << a.getA() << endl;
	cout << "\tb: " << a.getB() << endl;
	cout << "\tc: " << a.getC() << endl; 
	
	// Calculate number of zeros based on discriminant and display to user.
	cout << "The function " << a.getA() << "x^2 + " << a.getB() << "x + "  << a.getC() << " has " << a.numZeros(a.getA(), a.getB(), a.getC()) << " x-intercepts (zeros)." << endl;
	
	// Evaluate expression at specified values if there is a solution;
	if ( a.calcDiscriminant(a.getA(), a.getB(), a.getC()) >= 0){
		cout << a.printX(a.getA(), a.getB(), a.getC()) << endl;
	};
	
	cout << endl;
	return 0;
}
