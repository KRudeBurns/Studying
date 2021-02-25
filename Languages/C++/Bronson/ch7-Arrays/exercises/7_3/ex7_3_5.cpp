/*
Write, compile, and run a C++ program that has a declaration in main() 
to store the following numbers in an array named rates: 6.5, 7.2, 7.5, 
8.3, 8.6, 9.4, 9.6, 9.8, and 10.0.
There should be a function call to show() that accepts the rates array 
as a parameter named rates and then displays the numbers in the array.
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

void show (double [], int);


int main()
{
   //create array
   //6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, and 10.0.
   double rate[] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
   const int SIZE = sizeof(rate)/sizeof(double);
   show(rate, SIZE);
}

void show (double arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {        
        if( i == size-1)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
        
    }
    
}