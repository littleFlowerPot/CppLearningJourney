//This program initializes an array and then prints its values.
#include <iostream>
using namespace std;

int main ()
{
float a[] = {22.2, 44.4, 66.6};
/*to print the values of an array we need a for loop stopping at
the number of elements of the array. To get the size of the array
we use 'sizeof' funtion*/
int size_a = sizeof(a)/sizeof(float);
/* The sizeof funtion returns the size of its argument in bytes.
Since an array stores contiguously in memory its elements, and
each of the elements are of the same type, then dividing the total
number of bytes the array occupies in memory by the size of each of
its element types, we obtain the number of elements of the array, which
somewhat confusingly is also called the array size!  */
for (int i = 0;i<size_a;i++)
{
cout <<"\ta[" << i << "] = " << a[i] << endl; //prints a[i]=ith element
}
  return 0;
}
