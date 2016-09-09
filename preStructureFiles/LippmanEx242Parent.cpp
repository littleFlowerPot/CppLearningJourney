#include <iostream>
using namespace std;

int main ()
{
cout << "Lippman Exercises Section 2.4.2 \n\n";
/**********************************************************************
* Learning comment: I will use \n for text, but endl for values       *
* to deal with the buffer flushing issue, of which details still need *
* to be explored by me                                                *
***********************************************************************/
cout<< "Exercise227 \n\n";
cout <<"(a) Is this legal: int i=-1, &r=0 ? \n\n";
cout <<"The first thing I want to do is understand"
<<"what the comma serves: is it int &r=0?"
<<"I will do this by checking with int i=1, k=0 \n";
int i=1, k=0;
cout<<"\n"<<i<<" "<<k<<endl;
cout<<"\n";

cout<<"This seems to check out. We can conclude the comma"
<<"Indeed is int &r=0 \n\n";

cout<<"Without coming across this example before, I will hazard"
<<"a guess, and say it is indeed legal - well the second part anyway."
<<"The first part is NOT, as variables of type int >= 0. Lets just"
<<"check this: \n\n";

{int i=-1;
cout<<i<<endl;}  //scoping i

cout<<"\n\n";
cout<<"Opps! I got confused with signed and unsigned. Int IS Signed, so this is"
<<"all good. What about the int &r = 0? As stated, I want to guess it is "
<<"legal...but wait, is it? Lets review how declerations and definitions"
<<"look in memory. int m declares the variable m at a memory address:\n\n";

cout<<"..| | | | |...| | |m| |... \n\n";

cout<<"int m  = 7 assigns the value 7 to m. int &r = m creates a reference"
<<"to m (but not a new object). So r refers to the object m. Does it"
<<"make sense to refer to a value? No! A value byitself has no location"
<<"in memory. Of course, lets check if all this mumbo jumbo actually holds"
<<"any water:\n\n";

/*{int &r = 0;
cout<<r<<endl;
}
*/
cout<<"As predicted, compiler chucks a fuss! In fact, schaums p157 mentions"
<<" a reference cannot be initialised to a literral (in this case an int"
<<"litteral. Howver const can, by the way.\n\n";





  return 0;
}
