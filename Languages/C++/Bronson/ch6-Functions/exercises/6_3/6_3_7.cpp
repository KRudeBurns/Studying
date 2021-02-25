/*
(Program) Write a function named liquid() that has an integer number parameter and
reference parameters named gallons, quarts, pints, and cups. The passed integer 
represents the total number of cups, and the function is to determine the numbers 
of gallons, quarts, pints, and cups in the passed value. 
Using the reference parameters, the function should alter the arguments in the 
calling function. 

Use these relationships: 2 cups = 1 pint, 4 cups = 1 quart, and 16 cups = 1 gallon.
*/

void liquid(int tc, int& xGal, int& xQrt, int& xPint, int& xCups)
{
    xGal = tc / 16;
    xQrt= (tc % 16) / 4;
    xPint = ((tc % 16)%4) / 2;
    xCups = ((tc % 16)%4) % 2;
}

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
   int totalCups = 0, gallons = 0, quarts = 0, pints = 0, cups;
   cout << "Enter total number of cups: ";
   cin >> totalCups;
   liquid(totalCups, gallons, quarts, pints, cups);
   
   cout << "You entered " << totalCups << " cups\n";
   cout << "Which translates to: \n";
   cout << gallons << " gallons\n"
        << quarts << " quarts\n"
        << pints << " pints\n"
        << cups << " cups\n";
}