/*
Write a declaration to store the following values in an array named rates: 12.9,
18.6, 11.4, 13.7, 9.5, 15.2, and 17.6. Include the declaration in a program that 
displays the values in the array by using pointer notation.
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
   double rates[] = {12.9, 18.6, 11.4, 13.7, 9.5, 15.2, 17.6};
   double * rPtr = rates;
   double size = sizeof(rates)/sizeof(double);
   
   for (int i = 0; i < size; i++)
   {
        cout << rPtr[i] << endl;
   }


}