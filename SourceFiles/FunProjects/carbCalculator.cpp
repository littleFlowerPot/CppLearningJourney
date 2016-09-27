//This is a simple calculator to store and sum up my daily carb intake.

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//create a some whitespace between command prompt and program output in the CLI.
cout<<'\n';

//TODO:create strings to call during screen output
//TODO:create void function for this.
//TODO:create strings and database storage where I can: list the item I  have consumed, and then enter into a database and then query that database for grams of carb.

//Some CLI output for the user.
cout<<"Please enter the current list of grams of carbs consumed (or your previous total), each entry space seperated. Please press return and then ctrl+d (linux) or ctrl+z (windows) when done.";
cout<<'\n';
cout<<'\n';

//intialise an integer variable, and a sum variable summation holder, and then create a while loop to accept many inputs.
int v=0; //good practice to reduce compile errors: initialise!
int sum=0;
	while (cin>>v)
		sum = sum + v;

//When the while loop ends (inputs stop coming in, and retrun, then ctrl+d is pressed (end-of-file command in Linux -windows is enter then ctrl z), output sum.
cout<<'\n';
cout<<"The current grams of carbs is "<<sum<<"g"<<endl;
cout<<'\n';

//TODO:Store the sum for use next time calculator is invoked.

return 0;
}
