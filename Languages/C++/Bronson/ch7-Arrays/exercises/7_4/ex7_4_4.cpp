/*
 (Program) Write, compile, and run a C++ program that adds equivalent elements of 
 the two dimensional arrays named first and second. Both arrays should have two rows 
 and three columns. For example, element [1][2] of the resulting array should be the 
 sum of first[1][2] and second[1][2]. The first and second arrays should be 
 initialized as follows:

          first                                       second
16         18         23                        24         52         77
54         91         11                        16         19         59
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
   int first[2][3] = {{16, 18,23},{54,91,11}};
   int second[2][3] = {{24,52,77},{16,19,59}};
   int newArray[2][3] = {};

   for (int i = 0; i < 2; ++i)
   {
       for (int j = 0; j < 3; ++j)
       {
           newArray[i][j] = first[i][j] + second[i][j];
           cout << newArray[i][j] << " ";
       }
   }
}