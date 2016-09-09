/********************************************************************
*Following Shaums chapter 10 (classes), my first ever class implemtn*
********************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Ratio                             //class declaration.
{
public:                                 //access specifier
    void assign(int, int);              //void function declaration.
    double convert();
    void invert();
    void print();                       //Methods (Member Functions).

private:                                 //Member Data
    int num, den;

};                                      //Class declarations need to end
                                        //with a semi-colon (;)

/* I like to first define each function****/

void Ratio::assign(int numerator, int denominator) //Scope operator,
                                                   //Telling compiler
                                                   //this funtion is a
                                                   //member of class Ratio
{
num = numerator;
den = denominator;
//I believe this function just sets any inputs to num and den.

}                                       //No ; for function defn.

double Ratio::convert()
{
return double(num)/den;      //double(num) seems to convert -
                            //haven't seen this yet!
}

void Ratio::invert()
{
int temp = num;
num = den;
den = temp;     //nice! temp is num, but then num changes without
                //affecting temp!
}

void Ratio::print()
{
cout<<num<<'/'<<den; //cool, I haven't seen '' work with cout...

}


/* And now the main function! ********/

int main()
{
Ratio x;    //creates an object (instance?) of the class Ration, named x.
x.assign(22, 7);    //access x's member function assign (check my usage is correct,
                    //but I think it is, as x is the owner of the class' function and data...

cout<<"x = ";
x.print();    //Check this , but I think this is intentionally seperate from cout.
cout<<" = " << x.convert()<<endl;  //hmmm, above comment not applicable here!
                                   //Note that the buffer is flushed via endl...
x.invert();
cout<<"1/x = "; x.print();
cout<<endl;   //Was this put here for buffer flushing??



return 0;
}
