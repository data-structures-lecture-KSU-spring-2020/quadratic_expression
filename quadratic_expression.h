// Travis Hescox
// Homework 2
// Number 3
// Data Structures CS 3305
// Section 4

#ifndef QUADRATIC_EXPRESSION_H
#define QUADRATIC_EXPRESSION_H
#include <string>

using namespace std;

class quadratic_expression
{
public:
	quadratic_expression();
	double getA();
	void setA(double newA);
	double getB();
	void setB(double newB);
	double getC();
	void setC(double newC);
	string printX(double a, double b, double c);
	int numZeros(double a, double b, double c);
	double calcDiscriminant(double a, double b, double c);

private:
	double a;
	double b;
	double c;
	double discriminant;
};

#endif // QUADRATIC_EXPRESSION_H
