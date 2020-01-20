// Travis Hescox
// Homework 2
// Number 3
// Data Structures CS 3305
// Section 4

#include "quadratic_expression.h"
#include <iostream>
#include <math.h> 
#include <string>

quadratic_expression::quadratic_expression(){}

double quadratic_expression::getA(){
	return a;
};

void quadratic_expression::setA(double newA){
	a = newA;
};

double quadratic_expression::getB(){
	return b;
};

void quadratic_expression::setB(double newB){
	b = newB;
};

double quadratic_expression::getC(){
	return c;
};

void quadratic_expression::setC(double newC){
	c = newC;
};

double quadratic_expression::calcDiscriminant(double a, double b, double c){
	return (pow(b, 2) - (4 * a * c));
};

// Uses discriminant to determine if the function crosses the x-axis. 
int quadratic_expression::numZeros(double a, double b, double c){
	discriminant = quadratic_expression::calcDiscriminant(a, b, c);
	if (discriminant < 0){
		return 0;
	} else if ( discriminant == 0){
		return 1;
	} else {
		return 2;
	}
};

// Calculates x-intercepts and returns results in the form of a string. 
string quadratic_expression::printX(double a, double b, double c){
	discriminant = quadratic_expression::calcDiscriminant(a, b, c);
	if (discriminant < 0 ){
		return "There are no x-intercepts.";
	} else if (discriminant == 0){
		return "The x-intercept is: " +  to_string((-1 * b) / (2 * a)); 
	} else {
		return "The x-intercepts are: " + to_string(((-1 * b) + pow(discriminant, 0.5 )) / (2 * a))  + " and " + to_string(((-1 * b) - pow(discriminant, 0.5 )) / (2 * a));
	};
	
};


