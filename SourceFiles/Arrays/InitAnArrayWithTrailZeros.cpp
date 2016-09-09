//This program initializes an array with trailing zeros :)
#include <iostream>
using namespace std;

int main ()
{
float a[7] = {22.2, 44.4, 66.6}; //The rest of the array will be float zero
int size_a = sizeof(a)/sizeof(float);
for (int i = 0;i<size_a;i++)
{
cout <<"\ta[" << i << "] = " << a[i] << endl; //prints a[i]=ith element
}
  return 0;
}
