#include <iostream>
using namespace std;

int main ()
{
float a[] = {22.2, 44.4, 66.6};
int size = sizeof(a);
int sizeFloat = sizeof(float);
int sizeDouble = sizeof(double);
int sizeInt = sizeof(int);
cout << "the size of a is " << size << "bytes." <<endl;
cout << "the size of float is " << sizeFloat <<"bytes." << endl;
cout << "the size of double is " << sizeDouble <<"bytes."<<endl;
cout << "the size of int is " << sizeInt << "bytes"<<endl;



  return 0;
}
