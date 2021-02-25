/*
 Write, compile, and run a C++ program that declares three one-dimensional arrays
named price, quantity, and amount. 

Each array should be declared in main() and be capable of holding 10 double-precision numbers. 

The numbers to store in price are 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, and 3.98. 

The numbers to store in quantity are 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, and 4.8. 

Your program should pass these three arrays to a function named extend(), which 
should calculate elements in the amount array as the product of the corresponding 
elements in the price and quantity arrays
 (for example, amount[1]ƒ= price[1]ƒ*ƒquantity[1]). 
 
 After extend() has passed values to the amount array, the values in the array 
 should be displayed from within main().
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

void extend(double pr[], double qty[], double amt[], int size);


int main()
{
   //DECLARE 3 one dimensional arrays
   //named price, quantity, and amount. 
   //and be capable of holding 10 double-precision numbers. 
   
   //The numbers to store in price are 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 
   //6.58, 18.32, 12.15, and 3.98. 
   double price[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98}, 

   //The numbers to store in quantity are 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, and 
   //4.8. 
   quantity[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8}, amount[10];

   extend(price, quantity, amount, 10);

   



}


/* Your program should pass these three arrays to a function named extend(), which 
should calculate elements in the amount array as the product of the corresponding 
elements in the price and quantity arrays */

void extend(double pr[], double qty[], double amt[], int size)
{
    cout << "Amount = ";
    for (int i = 0; i < size; ++i)
    {
        amt[i] = pr[i] * qty[i];
        cout << " " << pr[i] << " ";
    }

    
}