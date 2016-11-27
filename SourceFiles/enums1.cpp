/*Enums
Enums are another way in C++ (c.f classes) to implement user defined types
An enumeration type is an INTEGRAL type, defined by the user with the syntax
enum typename {enumerator-list};
*/

//Lets start some programs!

#include <iostream>
using std::cout;
using std::cin;

int main()
{


enum Semester {FALL,SPRING,SUMMER}; //I wonder if it is convention to have the enum name
                                    //start with a captital letter, as in Schaums it seems to
                                    //always do.

//So the above defined a type Semester which can take 3 possible values (defined in the list above)

//Now we can declare variables of this type:

Semester s1,s2;

//And just like with pre-defined types, we can then set values to these:

s1=SPRING;
s2=FALL;
cout<<s1<<" "<<s2; //note the output will be 1 and 0 (integer types- constant??), the "locations of the enum-list" elements.
//These naturally have locations in memory:

cout<< "the memory location of these two variables are"<<
    &s1<< "and" << &s2 << " and these should be on the stack in memory as they are in local"<<
     "scope of the program";

 //Okay time for some personal practice now.

 //Lets play around with enumerating days of the week, asking users to input their day of the week
 //and then printing out the next day, and the previous day.

 //Start with defining the enum

 /*enum Day {MONDAY=1,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY, SATURDAY, SUNDAY};
 Day userInputDay;
 cout<< "please input the day of the week.";
 cin >> userInputDay;
*/

enum Answer {NO=0,FALSE=0,YES=1,TRUE=1,OK=1};
Answer answer;
cin >> answer;




return 0;

}
