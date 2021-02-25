/*
11. (Program) Write a program that uses Heron's formula to find the 
area (A) of a triangle with sides of length a, b, and c.

Write, test, and execute a function that accepts the values of a, b, and c as parameters from a calling function, and then calculates the values of s 
where s = (a+b+c)/2.

If any given length is negative, do not form a triangle, and the function should set A = -1. The value of A should be returned by the function. 

Test the function by passing various data to it and verifying the returned value.

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

double heronsFormula(int, int, int);


int main()
{
   cout << heronsFormula(6, 4, 3) << endl;
   cout << heronsFormula(10, 12, -3) << endl;
   cout << heronsFormula(-1, 11, 13) << endl;
   cout << heronsFormula(10, -9, 3) << endl;
   cout << heronsFormula(14, 12, 23) << endl;
   cout << heronsFormula(14, 22, 13) << endl;
   cout << heronsFormula(5, 8, 10) << endl;
   
}

double heronsFormula(int a, int b, int c)
{
    double s = 0, area = 0;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "At least one of your measurements is not valid ";
        area = -1;
    }
    else
    {
        s = (a+b+c)/2.0;        
        area = sqrt(s*(s-a)*(s-b)*(s-c));         
    }

    return area;
}