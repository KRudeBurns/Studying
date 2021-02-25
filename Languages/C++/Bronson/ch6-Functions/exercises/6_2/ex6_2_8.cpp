/*
8. (Program) a. Write a function named daycount() that accepts a month, day, and year as its input arguments; calculates an integer representing the total number of days from the turn of the century to the date that’s passed; and returns the calculated integer to the calling function.

For this problem, assume each year has 365 days and each month has 30 days. 
Test your function by verifying that the date 1/1/00 returns a day count of 1.

b. Include the daycount() function written for Exercise 8a in a working program. 
The main() function should correctly call daycount() and display the integer 
returned by the function. Test the function by passing various data to it and verifying the returned value.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int dayCount(int, int, int);

int main()
{
   cout << dayCount(1, 1, 2000) << endl;
   cout << dayCount(10, 2, 2000) << endl;
   cout << dayCount(10, 05, 2001) << endl;
   cout << dayCount(12, 11,2020) << endl;
   cout << dayCount(12, 11,2010) << endl;   
}

int dayCount(int d, int m, int y)
{
    int numOfDays = 0;

    //days cannot be more than 30
    //months cannot be more than 12
    //years cannot be longer than 3 digits or > 999
    if(d > 30 || m > 12 || y-2000 > 999 || y-2000 < 0)
    {
        cout << "One of your values is out of range \n"
             << "days cannot be more than 30 \n"
             << "months cannot be more than 12 \n"
             << "years must be in 4 digit format, \n"
             << "years - 2000 cannot be negative or greater than 999 \n"; 
             
             ;
        throw(1);
    }
    else
    {
        numOfDays = d + ((m-1) * 30) + ((y-2000) * 365);
    }
    
    return numOfDays;
}