/*
11. (Program) Write, compile, and run a C++ program that specifies three one-dimensional arrays named price, amount, and total. 

Each array should be capable of holding 10 elements. Using a for loop, input values for the price and amount arrays. 

The entries in the total array should be the product of the corresponding values in
 the price and amount arrays (so total[i]=price[i]*amount[i]). 
 
 After all the data has been entered, display the following output, with the corresponding value under each column heading:
totalpriceamount
----------------
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::mt19937_64;
using std::mt19937;
namespace sc = std::chrono;  //chronos is not part of the std::library or something like that.


int main()
{
   const int SIZE = 10;
   double price[SIZE], amount[SIZE], total[SIZE];

   auto seed = sc::high_resolution_clock::now().time_since_epoch().count(); 
   mt19937_64 mt_rand(seed);
   
   for (int i = 0; i < SIZE; ++i)
   {
       //cout << "Enter your price and amount: ";
       //cin >> price[i] >> amount[i];
       
       
       price[i] = (mt_rand()) % 540 + 1;
       amount[i] = (mt_rand()) % 259 + 1;
       total[i] = price[i] * amount[i];       
       
   }

   cout << "price" << "\t" << "amount" << "\t" << "total" << endl;
   cout << "-----" << "\t" << "-----" << "\t" << "------" << endl;

   for (int i = 0; i < SIZE; ++i)
   {
       cout <<"$"<< price[i] <<"\t" << amount[i] << "\t" <<"$"<< total[i]
            << endl;
   }

}