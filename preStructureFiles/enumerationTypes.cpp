/************************************
*Exploring Enumeration Types        *
*                                   *
************************************/
#include <iostream>
using namespace std;

int main ()
{
cout<<"Enumerators, or the enumerator-list, is a list of interger constants, i.e const int."
<<"By defaut, the first enumerator is given the constant integer 0, then the next 1, 2, and so on."
<<"This can be overridden, to whatever you like, but if interger values are only assigned to some of the"
<<"enumerators, then the ones that follow are given consecutive values \n. Lets play around with an example";

enum Season {FALL, WINTER, SUMMER, SPRING};

cout<<'\n'<<"We defined the following enumeration type : enum Season {Fall, Winter, Summer, Spring} \n";
cout<<'\n'<<"We can now declare variable of this (enumerative) type";

Season s1,s2,s3,s4;
s1 = SPRING;
cout<<&s1<<endl;
cout<<'\n\n';


  return 0;
}
