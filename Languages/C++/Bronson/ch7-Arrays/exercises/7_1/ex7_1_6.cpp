/*
6. (Program) a. Write, compile, and run a C++ program to input the following values into an
array named prices: 10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, and 17.59. After the
data has been entered, have your program display the values.
b. Repeat Exercise 6a, but after the data has been entered, have your program display it in the
following form:
10.95 16.32 12.15
8.22  15.98 26.22
13.54  6.45 17.59
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double prices[9];
   char response = 'y';   
   int counter = 0;
   while(counter < 9)
   {
       cout << "Enter your prices > ";
       cin >> prices[counter];       
       counter++;
   }
   cout << endl;
   counter = 0;
   while (counter < 9)
   {
       cout << prices[counter] << "\t" << prices[counter+1] << "\t" << prices[counter+2] << endl;
       counter +=3;
   }
}