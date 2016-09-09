#include <iostream>
using namespace std;

int main ()
{ int SIZE;
  double a[SIZE];
  cout << "Please enter the desired size of the array, followed by the return key: " << endl;
  cin >> SIZE; 
  cout << " Now pls enter " << SIZE << " numbers: \t";
  for (int i=0; i<SIZE; i++)
      {cin >> a[i];
      }	
  cout << "The array elements in REVERSE order are: \t";
  for (int i =SIZE-1; i>=0; i--)
      {cout << '\t' << a[i];
      }	  

  return 0;
}
