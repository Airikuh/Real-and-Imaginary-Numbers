//Header.h File For Class Information
#pragma once
#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

class Complex {
	//Private Attributes
	double real;
	double imaginary;

	//Public Methods
public:
	//Set Methods
	void setReal(double);
	void setImaginary(double);

	//Get Methods
	double getReal() const;
	double getImaginary() const;

	//Default Constructor
	Complex() { real = 0; imaginary = 0; }

	//Parameterized Constructor With One Parameter
	Complex(double realPart) { real = realPart + 0*imaginary; }

	//Parameterized Constructor With Two Parameters
	Complex(double value1, double value2) { real = value1; imaginary = value2; }


	//Overloaded Operator Prototypes
	bool operator==(Complex&);
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);

	//Print Method to Display Results
	void Print();

	friend ostream& operator<<(ostream& out, const Complex&);
	friend istream& operator>>(istream& in, Complex&);


};
 
