//Causing Unhandled Exceptions
#include <iostream>
using namespace std;

int main ()
{
float a[] = {22.2, 44.4, 66.6};
float x = 11.1;
cout<<"x = "<<x<<endl;
a[3333] = 88.8; //Index is out of bounds
cout<<"x = "<<x<<endl;


  return 0;
}
