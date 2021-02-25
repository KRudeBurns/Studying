/*
 (Program) a. Write, compile, and run a C++ program that adds the values of all 
 elements in the val array used in Exercise 2 and displays the total.
b. Modify the program written for Exercise 3a to display the total of each row 
separately
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
   int i = 0, j = 0, sum = 0, val [3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};

   for (i = 0; i < 3; ++i)
   {
       int row_sum = 0;
       for (j = 0; j < 4; ++j)
       {
           sum += val[i][j];
           row_sum += val[i][j];
       }
       cout << "Sum of row " << i+1 << " = " << row_sum << endl;
   }

   cout << "Total Sum = " << sum << endl;
}