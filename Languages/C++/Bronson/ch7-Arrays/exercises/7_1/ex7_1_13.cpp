/*
14. (Program) Fill an array of 1000 floating-point numbers with random numbers 
that have been scaled to the range 1 to 100. 

Then determine and display the number of random numbers having values
between 1 and 50 and the number having values greater than 50. What do you expect the output counts to be?
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
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
   //mt19937_64 mt_rand(seed);

   auto real_rand = std::bind(std::uniform_real_distribution<double>(1,100),
                           mt19937_64(seed));

   //array
   const int SIZE = 1000;
   double num[SIZE];

   //count of numbers   
   int sub_fifty = 0, above_fifty = 0;

   for (int i = 0; i < SIZE; ++i)
   {
       num[i] = real_rand()+1;
       cout << num[i] << " ";
       if (num[i] < 50)
           ++sub_fifty;
       else
       {
           ++above_fifty;
       }
       
   }

   cout << "\n\n Entries below fifty: = \t" << sub_fifty << endl;
   cout << " Entries above fifty: = \t" << above_fifty << endl;
   cout << " ------------------------------------------" << endl;
   cout << " Total Entries = \t\t" << sub_fifty + above_fifty << endl;


}