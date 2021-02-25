/*
15 (Program) a. Write, compile, and run a C++ program that inputs 10 double-precision numbers in an array named raw. 
After these numbers are entered in the array, your program should cycle
through raw 10 times. 

During each pass through the array, your program should select the lowest value 
in raw and place it in the next available slot in an array named sorted. When 
your program is finished, the sorted array should contain the numbers in raw in 
sorted order from lowest to highest. 

(Hint: Be sure to reset the lowest value selected during each pass to a very
high number so that it’s not selected again. You need a second for loop in the 
first for loop to locate the minimum value for each pass.)

b. The method used in Exercise 15a to sort the values in the array is 
inefficient. Can you determine why? What might be a better method of sorting the 
numbers in an array?
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
  
   int const SIZE = SIZE_ptr;
 

   //create arrays for raw and sorted units
   int raw[SIZE], sorted[SIZE];

   //generate my digits
   auto seed = sc::high_resolution_clock::now().time_since_epoch().count();   

  auto real_rand = std::bind(std::uniform_real_distribution<double>(1,1000),
                           mt19937_64(seed));

   cout << "Unsorted array is\n";
   cout << "---------------------------------\n";
   for (int i = 0; i < SIZE; ++i)
   {       
       raw[i] = real_rand() + 1;
       cout << raw[i] << " ";
   }
   

   // i struggled with this question. Got the solution from
   //https://github.com/phentz15/A-First-Book-of-C-Exercises-/blob/master/Exercise%207.1%20(Completed)


   for (int i = 0; i < SIZE; ++i)
   {   
       for(int j = i+1; j < SIZE; ++j)
       {          
           if(raw[i] >= raw[j])
           {
               sorted[i] = raw[i];
               raw[i] = raw[j];
               raw[j] = sorted[i];               
           }           
       }  
       sorted[i] = raw[i];   
   }
   
   cout << "\n\nSorted Array is \n";
   cout << "---------------------------------\n";
   for (int i = 0; i < SIZE; ++i)
   {       
       cout << sorted[i] <<  " ";
   }
 
}