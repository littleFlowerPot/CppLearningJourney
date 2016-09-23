//Traversing an array with pointers. Following Schaums

#include <iostream>
using std::cout;
using std::endl;

int main()
{
//First I am going to output what is written in Schaums, to help my understanding.
cout<<'\n';
cout<<"***************************************************************************************************"<<'\n';
cout<<"Pointers can have arithmetic applied to them. The affect of this arithemetic is to cause the pointer"<<'\n';
cout<<"to point to another memory location. THE ACTUAL CHANGE IN ADDRESS depends on the size of the FUNDAMENTAL TYPE to which the pointer points"<<'\n';
cout<<"****************************************************************************************************+"<<'\n';
cout<<'\n';
//now for the code :)

const int SIZE = 3;
short a[SIZE]={22,33,44};
cout<<"a= "<<a<<endl;
cout<<"sizeof(short) = "<<sizeof(short)<<endl;
	for(short* p=a;p<a+3;p++)
		{
		cout<<"p = "<<p<< ", *p = "<< *p << endl;
		}


return 0; 
}
