/*
14. (Program) a. Years that are evenly divisible by 400 or are evenly divisible by 4 but not by 100 are leap years. 

For example, because 1600 is evenly divisible by 400, 1600 was a leap year.
Similarly, because 1988 is evenly divisible by 4 but not by 100, it was also a leap year. 

Using this information, write a C++ function that accepts the year as user input and returns a 1 if the passed year is a leap year or a 0 if it isn’t.

b. Include the function written in Exercise 14a in a working program. Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. Test the function by passing various data to it and verifying the returned value.
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

bool leapYear(int);

int main()
{
   cout << "Leap year " << leapYear(1600) << endl;
   cout << "Leap year " << leapYear(1988) << endl;
   cout << "Leap year " << leapYear(2020) << endl;
   cout << "Leap year " << leapYear(2010) << endl;
}

bool leapYear(int x)
{
    cout << x << " ";
    if (x % 400 == 0 || x % 4 == 0)
    {
        return true;
    }
    else 
        return false;
}