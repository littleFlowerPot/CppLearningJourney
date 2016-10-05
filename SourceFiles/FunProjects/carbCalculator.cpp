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
cout<<"Please enter the amount of carb sources consumed:";
cout<<'\n';
cout<<'\n';
double amountOfMilk = 0.0;
double milkCarbsFactor=4.7/100;

double amountOfChocPowder = 0.0;
double chocPowderCarbsFactor = 0.66;

double amountOfSugar = 0.0;

double amountOfCornFlakes = 0.0;
double cornFlakesCarbsFactor = 24/30;

double amountOfPasta = 0.0;
double pastaCarbsFactor = 71.2/100;

cin>> amountOfMilk, amountOfChocPowder, amountOfSugar, amountOfCornFlakes, amountOfPasta;
double amountOfCarbsFromMilk= milkCarbsFactor*amountOfMilk;
double amountOfCarbsFromChocPowder=chocPowderCarbsFactor*amountOfChocPowder;
double amountOfCarbsFromSugar = amountOfSugar; //sugar is carbs
double amountOfCarbsFromCornFlakes=amountOfCornFlakes*cornFlakesCarbsFactor;
double amountOfCarbsFromPasta=amountOfPasta*pastaCarbsFactor;

double sum = amountOfCarbsFromMilk+amountOfCarbsFromChocPowder+amountOfCarbsFromSugar+amountOfCarbsFromCornFlakes+amountOfCarbsFromPasta;

cout<<"\n\n";
cout<<"The number of carbs consumed is "<<sum<<"g";
cout<<"\n\n"; 




 
/*
//intialise an double variable, and a sum variable summation holder, and then create a while loop to accept many inputs.
double v=0; //good practice to reduce compile errors: initialise!
double sum=0;
	while (cin>>v)
		sum = sum + v;

//When the while loop ends (inputs stop coming in, and retrun, then ctrl+d is pressed (end-of-file command in Linux -windows is enter then ctrl z), output sum.
cout<<'\n';
cout<<"The current grams of carbs is "<<sum<<"g"<<endl;
cout<<'\n';

//TODO:Store the sum for use next time calculator is invoked.

*/
return 0;
}
