/*
9. (Program) a. The time in hours, minutes, and seconds is to be passed to a function named totsec(). Write totsec() to accept these values, determine the total number of seconds in the passed data, and display the calculated value.

b. Include the totsec() function written for Exercise 9a in a working program. The main() function should correctly call totsec() and display the value the function returns. 

Use the following test data to verify your program’s operation: hours = 10, minutes = 36, and seconds = 54. 

Make sure to do a hand calculation to verify the result your program displays
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

void totsec(int hours, int mins, int secs)
{
    int totalTime = 0;
    totalTime = (hours *60 * 60) + (mins * 60) + secs;
    cout << endl <<  hours << " hours, " << mins << " minutes, and " << secs 
         << " seconds " << "is equals to " << totalTime << " seconds.\n\n";
    
}

int main()
{
     totsec(10, 36, 54);
}