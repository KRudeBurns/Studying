/*
 (Program) Write, compile, and run a C++ program that stores the following 
 numbers in an array named prices: 9.92, 6.32, 12.63, 5.95, and 10.29. Your 
 program should also create two arrays named units and amounts, 
 each capable of storing five double-precision numbers. 

Using a for loop and a cin statement, have your program accept five user-input 
numbers in the units array when the program is run. Your program should store 
the product of the corresponding values in the prices and units array in the 
amounts array. 
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
namespace sc = std::chrono; 

int main()
{
   int SIZE_ptr;
   cout << "Enter size of array: ";
   cin >> SIZE_ptr;
   const int SIZE = SIZE_ptr;
   double prices[SIZE], amounts[SIZE];
   int units[SIZE];
   

   //generate my digits
   auto seed = sc::high_resolution_clock::now().time_since_epoch().count();   

  auto real_rand = std::bind(std::uniform_real_distribution<double>(1,1000),
                           mt19937_64(seed));

   //Generate prices
   for (int i = 0; i < SIZE; ++i)
   {       
       prices[i] = real_rand() + 1;      
   } 

   //Generate units
   for (int i = 0; i < SIZE; ++i)
   {       
       units[i] = real_rand() + 1;      
   }

   //generate amounts
   for (int i = 0; i < SIZE; ++i)
   {       
       amounts[i] = prices[i] * units[i];      
   }

   //Print my results
   cout << "Price \t\t" << "Units\t\t" << "Amount" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << prices[i] << "\t\t" << units[i] <<"\t\t" << amounts[i] << endl;
    }

    
}