#include <iostream>
using namespace std;

int main ()
{
cout<<endl;
cout<<"***********************"<<endl;
cout<<"Welcome to the refernce and pointer explanation for c++"<<endl;
cout<<endl;
cout<<"We start by declaring and defining a variable of type int and value n = 44"<<endl;
cout<<"Please press the 'enter' key when you are ready to proceed throughout the program"<<endl;
cin.get();
cout<<endl;
	int n=44;
cout<<" For int n=44,"<<endl;
cout<<" n has value "<<n<<" and is stored in the memory at address "<<&n<<endl;
cout<<endl;
cin.get();
cout<<" Now lets create a refernce to n, or an alias, another name for the same object"<<endl;
cout<<" A reference is NOT an object (a location, or rather a block of contiguous bytes in"<<endl;
cout<<" memory which store accessible information - wow!), but it is BOUND to that object"<<endl;
cout<<" (but not in a hardware way, just in a...well in another way in words...anyway."<<endl;
cout<<endl;
cout<<" Let rn be the refernce to n"<<endl;
cout<<endl;
cout<<"int& rn=n"<<endl;
	int& rn=n;
cout<<endl;
cout<<" rn = "<<rn<<" and n = "<<n<<endl;
cout<<endl;
cout<<" The memory address of rn is  "<<&rn<<" and the address of n is "<<&n<<endl;
cout<<endl;
cout<<" References seem kinda cool. Could be useful to refer to the same object"<<endl;
cout<<endl;
cin.get();
cout<<" But enough about pointers! I mean references! Its time for pointers!"<<endl;
cin.get();
cout<<" What are pointers you ask? They are a type of variable that stores the memory"<<endl;
cout<<" address of another variable. So the VALUE of a pointer is a memory address"<<endl;
cout<<endl;
cin.get();
cout<<" The cool thing about pointers is that they can be dereferenced"<<endl;
cout<<" meaning that you find the original variable value which lives at the"<<endl;
cout<<" memory address that is the value of the pointer"<<endl;
cout<<endl;
cin.get();
cout<<" In this case you can create an alias to the original varibale"<<endl;
cout<<" which I am pretty sure is an object (as opposed to a reference)"<<endl;
cout<<" I will explore this myself to make sure , though"<<endl;
cout<<endl;
cin.get();
cout<<" Well it's dinner time I'd say, so stay tuned for part 2: discovering"<<endl;
cout<<" how referencing is the opposite of dereferencing!"<<endl;
cout<<endl;
cout<<"******************************"<<endl;




  return 0;
}
