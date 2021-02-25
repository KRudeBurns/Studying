/*
3. (Program) Write, compile, and run a C++ program that uses an array 
declaration statement to initialize the following numbers in an
 array named slopes: 17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 
 18.24, and 6.92. Your program should locate and display the maximum
 and minimum values in the array.
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
   double slopes[SIZE];
   

   //generate my digits
   auto seed = sc::high_resolution_clock::now().time_since_epoch().count();   

  auto real_rand = std::bind(std::uniform_real_distribution<double>(1,1000),
                           mt19937_64(seed));

   cout << "Your unsorted array is\n";
   cout << "---------------------------------\n";
   for (int i = 0; i < SIZE; ++i)
   {       
       slopes[i] = real_rand() + 1;
       cout << slopes[i] << " ";
   } 

   double max = 0, min = slopes[0];
   int max_index = 0, min_index = 0;    

    for (int i = 0; i < SIZE; ++i)
    {
        if (max < slopes[i])
           max = slopes[i], max_index = i;

        if (min > slopes[i])
           min = slopes[i], min_index = i;
    }

    cout << "\nMax element is " << max << " at index " << max_index << endl;
    cout << "Min element is " << min << " at index " << min_index << endl;
}