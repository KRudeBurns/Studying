/*
6. (Program) Write a function named yearCalc() that has an integer parameter 
representing the total number of days from the date 1/1/2000 and reference 
parameters named year, month, and day.

The function is to calculate the current year, month, and day given the number of days passed to it. Using the reference parameters, the function should alter the
 arguments in the calling function. 
 
 For this problem, assume each year has 365 days, and each month has 30 days.
*/

void yearCalc(int td, int& xYrs, int& xMon, int& xDays)
{
    xYrs = td/365;
    xMon = (td%365)/30;
    xDays = (td%365)%30;
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
      int totalDays = 0, yrs = 0, mon = 0, days = 0;
   cout << "Enter total number of days: ";
   cin >> totalDays;
   yearCalc(totalDays, yrs, mon, days);
   
   cout << "You entered " << totalDays << " days\n";
   cout << "Which translates to: \n";
   cout << yrs << " Years\n"
        << mon << " Months\n"
        << days << " days\n";
}