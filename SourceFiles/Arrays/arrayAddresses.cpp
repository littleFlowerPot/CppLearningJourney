#include <iostream>
using namespace std;

int main ()
{
double a[3];
a[2] = 55.55;
a[1] = 33.11;
a[0] = 11.11;
cout << " memory address of a is " <<  &a <<'\n'<< "memory address of a[0] is " << &a[0] << '\n'
 << "memory address of a[1] is " << &a[1] << '\n' << "and memory address of [2] is " << &a[2]<< endl;


  return 0;
}
