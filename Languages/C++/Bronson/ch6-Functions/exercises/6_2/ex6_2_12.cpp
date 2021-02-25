/*
12. (Program) a. Write a function named whole() that returns the integer part of any number passed to the function. (Hint: Assign the passed argument to an integer variable.)

b. Include the function written in Exercise 12a in a working program. Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. Test the function by passing various data to it and verifying the returned value.
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

int whole(double);

int main()
{
   cout << whole(256.79) << endl;
   cout << whole(142.19) << endl;
   cout << whole(2.70) << endl;
   cout << whole(6.22) << endl;
}

int whole(double x)
{
    return (int) x;
}