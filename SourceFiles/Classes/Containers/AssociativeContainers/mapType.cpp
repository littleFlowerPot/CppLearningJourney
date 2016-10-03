//First look at maps.
//Include the string header file  and use string from std namespace
#include<iostream>
#include<map>		//include map header
#include<string>
using std::map;		//map is from the standard library
using std::cout;
using std::cin;
using std::string;

int main()
{

//This program is taken from Lippman, as first look at maps, pg 421 "Using an associative container. It will have PR's flavor on it though.
//In fact this is so important I will make a standard output saying as much :P
cout<<'\n';
cout<<"Lippman's first look at maps, with PR's flavor on it. Counting the number of times each word appears in the user's input";
cout<<'\n';
//A map contains a key-value pair. Here the key is the string type, and the values are the type size_t which is in Lippman pg 116 section 3.5.2 and is a type
//used as a counter and 'guaranteed' to hold any object in memory of any size apperentely.
map<string, size_t> word_count; //Empty map from string to size_t.
string word;
while (cin>>word)
	++word_count(word)	//fetch and increment the counter for word.
for (const auto &w : word_count) //I have no idea what this is : Lippmman says, 'for each element in the map'
	cout<<w.first<<" occurs "<<w.second
	<< ((w.second>1) ? " times" : " time")<<endl; 	//this prints the results!


return 0;
}
