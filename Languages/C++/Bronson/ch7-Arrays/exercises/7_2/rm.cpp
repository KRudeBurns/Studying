/*
Problem 5.14: Given two positive integers x and y, 
how would you compute x/y if the only operators you can use are addition,
subtraction, and multiplication? pg.182
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
   int x = 0, y = 0, result = 0, remainder;

   cout << "Enter your quotient and divisor: ";
   cin >> x >> y;
   

   while (x > y-1)
   {
       x -= y;
       result++;
   }

   remainder = y * result + x;


   cout << "We computed: " << remainder << " divided by " << y << endl;
   cout << "The result = " << result << endl;
   cout << "The remainder was " << x;
}