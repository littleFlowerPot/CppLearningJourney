/*
 * test the inter routine
 */

#include <iostream>
#include "interpy.hpp"
using namespace std;

int main(int argc, char **argv)
{
	const int ARRAYSIZE = 2;
	double x[ARRAYSIZE] = {2.3, 18.7}, y[ARRAYSIZE] = {41,82};
	double *p = x;
	
	cout << "Testing the interpy function." << endl;
	cout << "argc = " << argc << endl;
	cout << "argv = " << argv[0] << endl;
	cout << "*p = " << (&p+1) << endl;
	cout << "The interpolated value of the function is " << interpy(x, y, 9) << endl;
	return 0;
}

