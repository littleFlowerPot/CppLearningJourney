/*
 * test the pass by pointer routine
 */

#include <iostream>
#include "passByPointerFunction.hpp"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	
	double x = 2.3, y =6.7, z =7.8;
	double *px =&x, *py = &y, *pz = &z;

	cout << "The value of the pass by pointer function is " << pbpFunction(px, py, pz) << endl;
	return 0;
}

