
//Definitions.cpp Source File For Class Definitions
#include "Header.h"
#include <ostream>
#include <iostream>


//Set Methods
void Complex::setReal(double realPart) {
	real = realPart;
}
void Complex::setImaginary(double i) {
	imaginary = i;
}

//Get Methods
double Complex::getReal() const {
	return real;
}
double Complex::getImaginary() const {
	return imaginary;
}

//Overloaded Equality Operator
bool Complex::operator==(Complex& x) {
	//If Not Equal Return False
	if ((real != x.real) && (imaginary != x.imaginary)) {
		return false;
	}
}

//Overloaded Addition Operator
Complex Complex::operator+(Complex& object) {
	Complex result;

	//Real Part Addition
	result.real = real + object.real;

	//Imaginary Part Addition
	result.imaginary = imaginary + object.imaginary;

	return result;


}

//Overloaded Subtraction Operator
Complex Complex::operator-(Complex& object) {
	Complex result;

	//Real Part Subtraction
	result.real = real - object.real;

	//Imaginary Part Subtraction
	result.imaginary = imaginary - object.imaginary;

	return result;
}

//Overloaded Multiplication Operator
Complex Complex::operator*(Complex& object) {
	Complex result;

	//Multiplication Computations
	result.real = (real * object.real) - (imaginary * object.imaginary);
	result.imaginary = (real * object.imaginary) + (imaginary * object.real);

	return result;
}

//Overloaded Division Operator
Complex Complex:: operator/(Complex& object) {
	Complex result;
	double division;

	//Divisor
	division = (object.real * object.real) + (object.imaginary * object.imaginary);
	
	//Numerator Computations
	result.real = (real * object.real) + (imaginary * object.imaginary);
	result.real /= division;
	result.imaginary = (imaginary * object.real) - (real * object.imaginary);
	result.imaginary /= division;

	return result;
}

//Print Method
void Complex::Print() { 
	cout << "Real Number: " << real << ", Imaginary Number: " << imaginary << "i" << endl; }

//Stream Operators 
ostream& operator<<(ostream& out, const Complex& object) {
	out << object.real << object.imaginary;
	return out;
}
istream& operator>>(istream& in, Complex& object) {
	in >> object.real;
	in >> object.imaginary;
	return in;
}
