/*
5. (Program) Write a function named time() that has an integer parameter named 
seconds and three integer reference parameters named hours, mins, and secs.

The function is to convert the passed number of seconds into an equivalent number
of hours, minutes, and seconds. Using the reference parameters, the function 
should alter the arguments in the calling function.
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

void time(int, int&, int&, int&);

int main()
{
   int xTime = 0, hrs = 0, min = 0, sec = 0;
   cout << "Enter time in seconds: ";
   cin >> xTime;
   time(xTime, hrs, min, sec);
   
   cout << "You entered " << xTime << "seconds\n";
   cout << "Which translates to: \n";
   cout << hrs << " hours\n"
        << min << " minutes\n"
        << sec << " seconds\n";
}

void time(int tm, int& xhrs, int& xmin, int& xsec)
{
    xhrs = tm/3600;
    xmin = (tm%3600)/60;
    xsec = (tm%3600)%60;
}