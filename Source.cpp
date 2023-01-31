








//Source.cpp Source File For Main Function
#include "Header.h"
#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

int main() {
	Complex x(2, 2);
	Complex y(4, 3);
	Complex z, w, v, q;

	z = x + y;
	w = x - y;
	v = x * y;
	q = x / y;

	if (z == w)
		cout << "z = w " << endl;
	else
		cout << "z != w " << endl;

	z.Print();
	w.Print();
	v.Print();
	q.Print();

	return 0;
}
 
