//This program shows how memory allocation occurs in C++, and affects out of bound array allocation.

#include <iostream>
using namespace std;

int main ()
{
float n;
float m;
float q;
cout<<"\n\n"<<&n<<"\t"<<&m<<"\t"<<&q<<endl;
cout<<"\n\n";
cout<<"A Float occupies 4 bytes in memory - 4 'slots'. Note how the addresses are indeed 4 bytes apart";
cout<<"\n\n";
cout<<"This has an application to causing a side effect with arrays, and indexing out of bounds \n";
cout<<"Consider an array of size 3, and then defining a subsequent variable:\n";

float a[] = {22.2, 44.4, 66.6};
int size_a = sizeof(a)/sizeof(float);
for (int i=0;i<size_a;i++)
	{
	cout<<"a["<<i<<"]="<<a[i]<<"\t"<<&a[i]<<endl;
	}
float x = 11.1;
cout<<"\n Define a new float x = "<<x<<"\t"<<&x<<endl;
a[3] = 88.8;
cout<<"\n Now, define an out of bounds 4th element of a, a[3] = "<<a[3]<<"\t"<<&a[3]<<endl;
cout<<"\n Now, x = "<<x<<"...okay...this was meant to be 88.8...compiler? New C+11 standard?"<<endl;

/****************************************************
 * Exploring memory addresses using differing types *
 ***************************************************/
{
cout<<"What happens, in the top example, if n, m and q are different types?"
<<"Lets declare n to remain a float, m to be of type unsigned short and q to be of type double"<<endl;
float n;
unsigned short m;
double q;
cout<<"\n The size of n in memory is "<<sizeof(n)<<" bytes, m is "<<sizeof(m)<<" bytes, and q is "<<sizeof(q)<<"bytes"<<endl;
cout<<"\n Low lets check the memory addresses of each declared variable:\t";
cout<<"\n\n"<<&n<<"\t"<<&m<<"\t"<<&q<<"\n"<<endl;
cout<<"\n\n This reveals something quite cool - even though the ORDER of input was n,m,q, the memory addresses show that the order in memory is m,n,q: in order of"
<<"smallest byte size to largest! \n\n";
cout<<"Now I know enough to know that I don't know whether this is the arhitecture I am using at this moment, or the complier, or something eles even. But it is cool!\n\n";
}
  return 0;
}

