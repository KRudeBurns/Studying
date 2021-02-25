/*
 9.(Program) a. A clever and simple method of preparing to sort dates into ascending (increasing) or descending (decreasing) order is to convert a date in the form month/day/year into an
integer number with the formula date = year × 10000 + month × 100 + day. For example, using
this formula, the date 12/6/1999 converts to the integer 19991206, and the date 2/28/2011 converts to the integer 20110228. Sorting the resulting integer numbers puts dates into the correct
order automatically. Using this formula, write a function named convertdays() that accepts
a month, day, and year; converts the passed data into a single date integer; and returns the
integer to the calling function.
b. Include the convertdays() function written for Exercise 9a in a working program. The
main() function should call convertdays() correctly and display the integer the function
returns. Test the function by passing various data to it and verifying the returned value.
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

int convertDays(int, int, int);

int main()
{
   //convertDays(years, month, days)
   cout << convertDays(1999, 06, 12) << endl;
   cout << convertDays(2020, 07, 27) << endl;
   cout << convertDays(2010, 03, 5) << endl;
   cout << convertDays(1996, 11, 30) << endl;
}

int convertDays(int yyyy, int mm, int d)
{
    int properDate = yyyy * 10000 + mm * 100 + d;
    return properDate;
}