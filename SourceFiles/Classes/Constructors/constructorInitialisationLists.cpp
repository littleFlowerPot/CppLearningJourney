//Exploring constructor initialisation lists.

//necessary preprocessing directives
#include<iostream>
using std::cout;

class Ratio
{
 
  public:
    Ratio(int n=0,int d=1) : numerator(n), denominator(d) {}  //Constructor with inititialisation list. Function body
    							      //(either here or below/seperate file), is empty now.
    void print() {cout<<numerator<<'/'<<denominator; } //print function
  
  private:
    int numerator, denominator;
};


//The main function

int main()
{ Ratio x, y(4), z(22,7); //class instantiations

  //displaying output
  cout<<"\n\n";
  cout<<"x = ";
  x.print();
  cout<<"\ny=  ";
  y.print();
  cout<<"\nz = ";
  z.print();
  cout<<"\n\n";
}	
