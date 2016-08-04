#include <iostream>
using namespace std;

int main ()
{
cout<<"Lippman Exercises242, exercise 227b \n\n";

cout<<"Is int *const p2 = &i2 legal? \n\n";

cout<<"First, the syntax makes sense, so that checks out. Now lets analyse what the expression means."
<<"The expression translates to:\n\n";

cout<<"p2 is a constant pointer to i2, which is of type int. Let's explore what the difference between a constant pointer and a normal pointer is.\n\n";

{
int i2 = 44;
int *p1 = &i2;

cout<<"We define i2 to be of type int, value 44, and p1 to be a pointer to i2.\n";
cout<< "p1's value is the memory address of i2:" << p1<<" which to confirm, is the address of i2:"<<&i2<<endl;
cout<<"\n";
cout<<"Now p1 is an object itself, so will have its own, different, memory address: "<<&p1<<endl;
cout<<"\n";
cout<<"Each time this program is run, both addresses above change. Perhaps a constant pointer NEVER changes address? Let's find out!\n\n";

int i3 = 44;
int *const p2 = &i3;

cout<<"The address of constant pointer p2 is "<<&p2<<endl;
cout<<"\n";
cout<<"The address is NOT constant!\n";
cout<<"Okay, but like const, a constant pointer cannot have its value changed (thanks lippman). Let's see this in action: \n\n";

p1=&i3;

cout<<"Assigning p1 = &i3, p1 = "<< p1 <<" and the address of i3 is " << &i3<<endl;
cout<<"\n";
cout << "But assigning p2 (const pointer) = &i2, should make the compiler complain. It may complain of an assignment to read only variable"<<endl;

//p2=&i2;
//cout<<p2<<endl;



}
  return 0;
}

