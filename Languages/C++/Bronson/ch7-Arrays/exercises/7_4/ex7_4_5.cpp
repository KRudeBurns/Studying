/*
 (Program) a. Write, compile, and run a C++ program that finds and displays the 
 maximum value in a two-dimensional array of integers. 
 The array should be declared as a 4-by-5 array of integers and initialized with the 
 data : 
 16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, and 3.

b. Modify the program written in Exercise 5a so that it also displays the maximum 
value’s row and column subscript values.
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
   int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};

   //initialze max value to 1st value in the array
   int max = arr[0][0];
   int i = 0, j = 0;
   int max_col = 0, max_row= 0;

   for(i = 0; i < 4; ++i)
   {
       for (j = 0; j < 5; ++j)
       {
           //compare the max to the val here
           if(max < arr[i][j])
           {
               //cout << max << " is less than " << arr[i][j] << endl;
               max = arr[i][j];
               max_row = i, max_col = j;
               //cout << "max is now = arr[" <<i << "][" << j << "] = "  
                 //   << max << endl;
           }
           
       }
   }

   cout << "The Max value is " << max << endl;
   cout << "max is located in arr[" <<max_row << "][" << max_col << "] = " 
        << arr[max_row][max_col] << endl;

}