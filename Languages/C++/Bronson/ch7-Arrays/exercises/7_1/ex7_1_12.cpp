/*
12. (Program) Define an array named peopleTypes that can store a maximum of 50 
integer values entered at the keyboard. 

Enter a series of 1s, 2s, 3s, and 4s in the  array to represent
people at a local school function; 1 represents an infant, 2 represents a child, 3 represents a teenager, and 4 represents an adult. 

No other integer value should be accepted as valid input, and data entry should stop when a negative value is entered. 

Your program should count the number of each 1, 2, 3, and 4 in the array and display 
list of how many infants, children, teenagers, and adults were at the school function.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::mt19937_64;
using std::mt19937;
namespace sc = std::chrono;  //chronos is not part of the std::library or something like that.

int main()
{
   //generate 50 
   auto seed = sc::high_resolution_clock::now().time_since_epoch().count(); 
   mt19937_64 mt_rand(seed);

   //array
   const int SIZE = 50;
   int peopleTypes[SIZE];

   //types of population
   //1 - infant, 2 - child, 3 - teenager, and 4 - adult.
   int infant = 0, child = 0, teenager = 0, adult = 0;

   for (int i = 0; i < SIZE; ++i)
   {
       peopleTypes[i] = mt_rand()% 4 + 1;
       //cout << peopleTypes[i] << " ";
       if (peopleTypes[i] == 1)
           ++infant;
       if (peopleTypes[i] == 2)
           ++child;
       if (peopleTypes[i] == 3) 
           ++teenager;
       if (peopleTypes[i] == 4)
           ++adult;
   }

   cout << " Count of infants = \t" << infant << endl;
   cout << " Count of children = \t" << child << endl;
   cout << " Count of teenagers = \t" << teenager << endl;
   cout << " Count of adults = \t" << adult << endl;
   cout << " -----------------------------" << endl;
   cout << " Total Population = \t" << infant + child + teenager + adult << endl;


}