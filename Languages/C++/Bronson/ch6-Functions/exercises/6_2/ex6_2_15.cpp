/*
15. (Program) a. A second-degree polynomial in x is given by the expression 
ax^2 + bx + c, where a, b, and c are known numbers and a is not equal to 0. 

Write a C++ function named polyTwo (a,b,c,x) that computes and returns the value of a second-degree polynomial for any passed values of a, b, c, and x.

b. Include the function written in Exercise 15a in a working program. Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. Test the function by passing various data to it and verifying the returned value.
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

double polyTwo (double, double, double, double);

int main()
{
   cout << polyTwo(1.3, 6.4, 5.3, 14.2) << endl;
   cout << polyTwo(12, 4, 5.3, 4) << endl;
   cout << polyTwo(17, 3, 15, 0.2) << endl;
}

double polyTwo (double a, double b, double c, double x)
{
    double value = 0;
    value = (a * pow(x, 2)) + (b * x) + c;
    return value;
}