/*
13. (Program) a. Write a C++ function named fracpart() that returns the fractional part of any number passed to it. For example, if the number 256.879 is passed to fracpart(), the number 0.879 should be returned. 

Have fracpart() call the whole() function you wrote in
Exercise 12. The number returned can then be determined as the number passed to
fracpart() less the returned value when the same argument is passed to whole(). The
completed program should consist of main() followed by fracpart() followed by whole().
b. Include the function written in Exercise 13a in a working program. Make sure your function
is called from main() and returns a value to main() correctly. Have main() use a cout
statement to display the returned value. Test the function by passing various data to it and
verifying the returned value.
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
double fracPart(double);

int main()
{
   cout << fracPart(256.879) << endl;
   cout << fracPart(142.19) << endl;
   cout << fracPart(2.70) << endl;
   cout << fracPart(6.22) << endl;
}

int whole(double x)
{
    return (int) x;
}

double fracPart(double x)
{
    return (x - whole(x));
}