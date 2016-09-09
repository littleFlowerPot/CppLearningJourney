//This program investigates arrays, pointers and references, and their relos
#include <iostream>
using namespace std;

int main ()
{
cout <<"lets understand the 'array name'...what? Object? What IS it? "<<endl;
cout <<"we know that printing an array name returns an address"<<endl;
cout << "This address is also the address of the first element of the array "
<<endl;
cout << "There can be confusion about references and the & operator"
<<" causing an initial reaction of: is the array name a reference or "
<<"a pointer?  "<<endl;
cout<< "well lets start with references:"<<endl;
int n = 4;
int&rn = n;
cout<<"define an int n = "<<n<<endl;
cout<<"define a reference to n, rn = "<<rn<<endl;
cout <<"the memory address of n = "<<&n<<" and of rn = "<<&rn<<endl;
cout <<"they share the same address, hence are different names "
<<"for the same object. However rn itself is NOT an object"
<<" It could be, but then n couldn't be I guess, as according to Schaums"
<<"two objects must occupy distinct memory addresses"<<endl;
cout<<"What about pointers?"<<endl;
int* p = &n;
cout<<"Let's define a pointer p to n. P stores the memory address of n"<<endl;
cout<< "the value of p = " << p <<"and the address of n is "<<&n<<endl;
cout<<"However the address of p is "<<&p<<" , a seperate object"<<endl;
cout<<"Lets now look at arrays"<<endl;
int a[] = {4, 5, 6};
for (int i=0;i<3;i++)
{
cout<<"\ta["<<i<<"] = "<<a[i]<<endl;
}
cout<<"array a is composed of the above elements"<<endl;
cout<<"a = "<<a<<endl;
cout<<"the value of a is a memory address. So it is a pointer to an object"
<<endl;
cout<<" But the memory address of a = " <<&a<< " which is the same as"
<<" the memory address of the first element of a, a[0] = " <<&a[0]<<endl;
cout<<"So a and a[0] are the same object, but one is not a reference"
<<" of the other"<<endl;
cout<<"if a is a pointer to a[0], then we should be able to derefence it"
<<endl;
cout <<" *a = " <<*a<<endl;
cout <<"so a is a pointer to a[0] but it is not a seperate object"
<<" as it occupies the same memory location as a[0]"<<endl;





  return 0;
}
